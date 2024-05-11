/*Writing a function that finds all of the prime factors of a given number. A prime 
factor is a prime and also a factor. Test your function with numbers between 1 and 100*/

#include <iostream>
#include <vector>
using namespace std;

// Functions to find all prime factors of a given number
vector<int> findPrimeFactors(int num){
    vector<int> primeFactors;
    // Checking for divisibility by 2
    while(num % 2 == 0){
        primeFactors.push_back(2);
        num /= 2;
    }
    // Checking for divisibility by odd numbers starting from 3
    for(int i = 3; i * i <= num; i += 2){
        while(num % i == 0){
            primeFactors.push_back(i);
            num /= i;
        }
    }
    // If the remaining number is greater than 2, it is also a prime factor
    if(num > 2){
        primeFactors.push_back(num);
    }
    return primeFactors;
}

int main(){
    // Testing the function between 1 and 100
    for(int num = 1; num <= 100; ++num){
        cout << "Prime factors of " << num << ": ";
        // Calling the function with vector
        vector<int> factors = findPrimeFactors(num);
        // Printing the prime factors
        for(int factor : factors){
            cout << factor << " ";
        }
        cout << endl;
    } 
    return 0;
}