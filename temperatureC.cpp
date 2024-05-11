/*
Writing a function that, given a temperature in Fahrenheit, returns the temperature in Celsius.
*/

#include <iostream>
using namespace std;

// User Defined function
double temperatureC(double fahrenheit){
    double celsius = (fahrenheit - 32) * (100.0 / 180.0);
    return celsius;
}

// Main function
int main(){
    // Declaring variables
    double number;
    // Taking user input
    cout << "Enter the number: ";
    cin >> number;
    // Calling the function and storing it in a variable
    double result = temperatureC(number);
    // Displaying the result
    cout << "The temperature of " << number << " fahrenheit" << " = " << result << " celsius" << endl;
    return 0;
}