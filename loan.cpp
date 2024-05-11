/*Writing a program that, given the monthly payment, the number of years, and 
the interest rate, finds the value of the loan one can borrow. Hint: First find the 
multipliers*/

#include <iostream>
#include <cmath>
using namespace std;

int loan(double monthlyPayment, double numberOfYears, double interestRate){
    double multiplier = pow(1 + interestRate/100, numberOfYears);
    double loanValue = monthlyPayment * (1 - 1/multiplier) / (interestRate / 100);
    return loanValue;
}

int main(){
    // Declaring variables
    double monthlyPayment, numberOfYears, InterestRate;
    // Getting user input
    cout << "Enter your monthly payment: ";
    cin >> monthlyPayment;
    cout << "Enter the number of years: ";
    cin >> numberOfYears;
    cout << "Enter the interest rate: ";
    cin >> InterestRate;
    // Displaying the result
    cout << "The value of the loan one can borrow is $" << loan(monthlyPayment, numberOfYears, InterestRate) << endl;
    return 0;
}