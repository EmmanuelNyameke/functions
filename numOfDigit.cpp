/*Writing a function that finds the count of the digits in any positive integer (greater 
than 0). The integer is to be read from the keyboard. For example, the number 
of digits in 367 is 3. Hint: Divide the given integer by 10 continuously and 
increment the count until the integer is 0. Test the function in a program and 
tabulate the number of digits for at least 10 integers. */

#include <iostream>
using namespace std;

int numberOfDigit(int num){
   //Base case: if the number is less than 10, it has only one digit
    if(num < 10){
    return 1;
   }
   // Recursive case: divide the number by 10 to remove the last digit and call te function recursively with the remaining part of the number
   return 1 + numberOfDigit(num / 10);
}

int main(){
    // Declaring variables
    int num;
    // Taking user input
    cout << "Enter any positive number: ";
    cin >> num;
    // Displaying the result
    cout << "The number of digits in " << num << " = " << numberOfDigit(num) << endl;
    return 0;
}