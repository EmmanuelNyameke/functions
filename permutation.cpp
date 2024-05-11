/*
The permutation of n objects k at a time can be defined as shown below. The equation tells us how many permutations of n objects can be formed k elements at a time. P(n, k) = factorial (n) / factorial (n − k)
*/

#include <iostream>
using namespace std;

// Functions to calculate factorial
int factorial(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

// Functions to calculate permutations
int permutations(int n, int k){
    int numerator = factorial(n);
    int denominator = factorial(n - k);
    return numerator / denominator;
}

// Main Function
int main(){
    // Declaring variables
    int n, k;
    // Prompt and output
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of k: ";
    cin >> k;
    // Calling the permutation function and storing it in a variable
    int result = permutations(n, k);
    // Displaying the result
    cout << "Permutations of " << n << " objects taken " << k << " at a time: " << result << endl;
    return 0;
}