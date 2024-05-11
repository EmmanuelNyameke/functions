/* An integer is a prime if it is divisible only by itself and 1. Note that the integer 1 is not a prime. Write a function to test if a given number is prime. Then use a program to print the prime numbers less than 100 in a table of 10 columns.*/


#include <iostream>
using namespace std;

bool isPrime(int number){
    if(number <= 1){
        return false;
    }
    for(int i = 2; i <= number / 2; ++i){
        if (number % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    // Declaring variables
    int num;
    // Taking user input
    cout << "Enter a number: ";
    cin >> num;
    if(isPrime(num)){
        cout << num << " is a prime number" << endl;
    }
    else {
        cout << num << " is not a prime number" << endl;
    }

    cout << "\t----------------------------------------------------------------------" << endl;
    cout << "\t\tPrinting Prime Numbers Less Than 100" << endl;
    cout << "\t----------------------------------------------------------------------" << endl;
    int count = 0;
    for(int num = 2; count < 100; ++num){
        if(isPrime(num)){
            cout << num << "\t";
            if (++count % 10 == 0){
                cout << endl;
            }
            }   
        }
    return 0;
}