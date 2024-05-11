/*
 Writing a function that finds log2 x using the log functions in the <cmath> header file.
 */

#include <iostream>
#include <cmath>
using namespace std;

double log2(double x){
    return log(x) / log(2);
}

int main(){
    // Taking user input
    double number;
    cout << "Enter the number: ";
    cin >> number;
    // Calling the function and storing it in the variable
    double result = log2(number);
    // Displaying the result
    cout << "Log2(" << number << ") = " << result << endl;
    return 0;
}