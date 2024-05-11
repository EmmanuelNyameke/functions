/*
Writing a function to find the factorial of a positive number as shown below. Then use the function in a program to get the value of n from the user and print the factorial value.
*/

#include <iostream>
using namespace std;

// User Defined function
unsigned long long factorial(int n){
   if (n == 0 || n == 1){
    return 1;
   }
   else {
    return n * factorial(n - 1);
   }
}

// Main function
int main(){
    // Declaring variable
    int n;
    // Prompt and Output
    cout << "Enter a positive number: ";
    cin >> n;
    // Checking for valid input
    if (n < 0){
        cout << "Invalid input!!! Please enter a positive number." << endl;
        return 0;
    }
    // Calling the function and storing it in a variable
    unsigned long long result = factorial(n);
    // Displaying the result
    cout << "Factorial of " << n << " = " << result << endl;
    return 0;
}