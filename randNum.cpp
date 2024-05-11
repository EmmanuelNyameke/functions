/*
Show how to call the rand function to create a random number between 0.1 and 0.9 with only one digit after the decimal point. Hint: Find random numbers between 1 and 9 and then divide the result by 10 to get a double value. Write a program to test your answer with 10 numbers.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    // Seeding the random number generator with curent time
    srand(time(0));
    // Generating a random integer between 1 and 8
    int randomNumber = rand() % 8 + 1;
    // Converting the random integer to a floating-point number
    float randomFloat = static_cast <float> (randomNumber) / 10;
    // Displaying the generated random number
    cout << "Random Number: " << randomFloat << endl;
    return 0;
}