/*Writing a program that, given the desired future value, the number of years, and 
the interest rate, finds the value of the fixed amount to be invested. Hint: First 
find the multiplier*/

#include <iostream>
#include <cmath>
using namespace std;

double fixedAmount(double futureValue, double numberYears, double interestRate){
    double multiplier = pow(1 + interestRate/100, numberYears);
    double fixedAmount = futureValue / multiplier;
    return fixedAmount;
}

int main(){
    // Declaring variables
    double futureValue, numberYears, interestRate;
    // Taking user input
    cout << "Enter the future value: ";
    cin >> futureValue;
    cout << "Enter the number of years: ";
    cin >> numberYears;
    cout << "Enter the interest rate: ";
    cin >> interestRate;
    // Displaying the result
    cout << "The value of the fixed amount to be invested is $" << fixedAmount(futureValue, numberYears, interestRate) << endl; 
    return 0;
}