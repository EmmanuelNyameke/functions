/*
 Writing a function that, given a temperature in Celsius, returns the temperature in Fahrenheit.
 */

#include <iostream>
using namespace std;

// User defined function
double temperatureF(double celsius){
    double fahrenheit = celsius * 180.0 / 100.0 + 32;
    return fahrenheit;
}

// Main Function
int main(){
    // Declaring variable
    double number;
    // Taking user input
    cout << "Enter the temperature(C): ";
    cin >> number;
    // Calling the function and storing it in a variable
    double result = temperatureF(number);
    cout << "The temperature of " << number << " celsius" << " = " << result << " fahrenheit" << endl;
    return 0;
}