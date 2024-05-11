/*
The combination of n objects k at a time can be defined as shown below. The equation tells us how many combination of n objects can be formed k elements at a time. P(n, k) = factorial (n) / (factorial (n − k) * factorial (k))
*/

#include <iostream>
#include <cmath>
using namespace std;

// Functions to calculate the factorial of a number
int factorial(int num){
    int fact = 1;
    for(int i = 1; i <= num; i++){
        fact *= i;
    }
    return fact;
}

// Functions to calculate P(n, k)
int combinations(int n, int k){
    int numerator = factorial(n);
    int denominator = factorial(n - k) *  factorial(k);
    int result = numerator / denominator;
    return result;
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
    // Calling the combination function with arguments
    int results = combinations(n, k);
    // Displaying the results
    cout << "Number of combinations: " << results << endl;
    return 0;
}