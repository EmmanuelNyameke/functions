/*Writing two functions. The first finds the average of any set of three integers. 
The second finds the median of any set of three integers. A median is the 
number in the middle when the set is sorted (for example, the median of 
4, 9, 6 is 6 because if the numbers are sorted the set is (4, 6, 9)). Then call 
each function in the program to find the average and median of any three 
integers. Test your program for at least five different sets and tabulate the 
result*/
#include <iostream>

using namespace std;
// Average Function
double avgFunc(int num1, int num2, int num3){
    int sum = num1 + num2 + num3;
    double average = sum / 3;
    return average;
}

int medianFunc(int num1, int num2, int num3){
    if((num1 >= num2 && num1 <= num3) || (num2 <= num1 && num2 >= num3))
    return num1;
    else if((num2 >= num1 && num2 <= num3) ||(num2 <= num1 && num2 >= num3))
    return num2;
    else
    return num3;
}


int main(){
    // Declaring variables
    int num1, num2, num3;
    // Prompt and Output
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the last number: ";
    cin >> num3;
    // Displaying the result
    cout << "Numbers given are: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "Average of " << num1 << ", " << num2 << ", " << num3 << " = " << avgFunc(num1, num2, num3) << endl;
    cout << "Median of " << num1 << ", " << num2 << ", " << " and " << num3 << " after arranging them in ascending order" << " = " << medianFunc(num1, num2, num3) << endl;
    return 0;
}