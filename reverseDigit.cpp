/* Writing a function that reverses the digits in its argument. For example, given the 
integer 378, the function returns 873. Test your program with a few integers 
with different numbers of digits. */


#include <iostream>
using namespace std;

int reverseDigit(int number){
    int reversedNumber = 0;
    while(number > 0){
        // Extracting the rightmost digit
        int digits = number % 10;
        // Concatenating digits in reverse order
        reversedNumber = reversedNumber * 10 + digits;
        // Removing the last digit
        number /= 10;
    }
    return reversedNumber;
}

int main(){
    // Declaring variables
    int number;
    // Taking user input
    cout << "Enter the digits: ";
    cin >> number;
    // Displaying the result
    cout << "Reversed number of " << number << " = " << reverseDigit(number) << endl;
    return 0;
}