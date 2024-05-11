/*
Showing how we can use the round function to round a value. For example, the number 23.2 should be changed to 23, number 23.8 should be changed to 24, the number −23.2 should be changed to −23, and the number −23.8 should be changed to −24. 
*/

#include <iostream>
#include <cmath>
using namespace std;


int main(){
     double decNum;
     cout << "Enter the decimal number: ";
     cin >> decNum;
     // Rounding user input with library function
     cout << "Rounding " << decNum << " = " << round(decNum) << endl;
     return 0;
}

