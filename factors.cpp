/*Writing a program that finds all the factors of a given number. A factor is a 
number less than the given number that divides the number. The program should 
use a function to test if a number is divisible by another number. Test your 
function with numbers between 1 and 100*/

#include <iostream>
using namespace std;

// Function to test if a number is divisible by another number
bool isDivisible(int num, int divisor){
    return (num % divisor == 0);
}

// Function to find all factors of a given number
void findFactors(int num){
    cout << "Factors of " << num << ": ";
    // Checking if the remainder of the number is 0 and iterating through the factors
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            cout << i << " ";
        }
    }
    cout << endl;
}

// Main Function
int main(){
    // Testing the function with numbers between 1 and 100
    for(int i = 1; i <= 100; i++){
        findFactors(i);
    }
    return 0;
}