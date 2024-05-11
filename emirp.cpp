/* An integer is emirp (prime spelled backward) if, when we inverse the digits, it is 
also a prime number. Write a function to print the emirp integers from 1 to 1000 
ten numbers in a line. */

#include <iostream>
using namespace std;

bool isPrime(int num){
    if (num <= 1){
        return false;
    }
    for(int i = 2; i * i <= num; i++){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}

bool isEmirp(int num){
    int reversed = 0, temp = num;
    while(temp != 0){
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }
    return(num != reversed && isPrime(num) && isPrime(reversed));
}

int main(){
    int count = 0;
    for(int i = 1; i <= 1000; i++){
        if(isEmirp(i)){
            cout << i << "\t";
            count++;
            // Printing newline after every ten numbers
            if (count % 10 == 0){
                cout << endl;
            }
        }
    }
    return 0;
}