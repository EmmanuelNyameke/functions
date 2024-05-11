/* Another way to find if a number is a prime is to find if it is divisible only by 
itself and not any other number in the range 1 to its square root. Writing a function 
to test if a given number is a prime using this method. Then use a program to 
print the prime numbers less than 500 in a table of 10 columns*/

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num){
    // Checking for special cases
    if (num <= 1){
        return false;
    }
    // iterating from 2 to square root of a number
    for(int i = 2; i <= sqrt(num); i++){
        // if number is divisible by i, its not a prime number
        if(num % i == 0){
            return false;
        } 
    }
    // If no divisors found, number is prime
    return true;
}

int main(){
    // Declaring and initializing variable
    int count = 0;
    // Iterating from 2 to number less than 500
    for(int num = 2; num < 500; num++){
        if(isPrime(num)){
            cout << num << "\t";
            count++;
        //Print newline after every 10 numbers
        if (count % 10 == 0){
            cout << endl;
        }
        }
    }
    return 0;
}