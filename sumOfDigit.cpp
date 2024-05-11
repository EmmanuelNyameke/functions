/*Writing a function that finds the sum of the digits in any given integer. For 
example, the sum of the digits in 367 is 16. Write a program to tabulate at least 
five integers and print the sum of their digits*/


#include <iostream>
using namespace std;

int sumOfDigit(int number){
    // Declaring and initializing variable
    int sum = 0;
    while(number > 0){
        // Calculating the sum of the digit
        sum += number % 10;
        // Removing the last digit
        number /= 10;
    }
    return sum;
}


int main(){
    // declaring variables
    int number;
    // Taking user input
    cout << "Enter any number: ";
    cin >> number;
    // Displaying ouput
    cout << "Sum of " << number << " = " << sumOfDigit(number) << endl;
    return 0;
}