/*
To show the behavior of the random number generator, generate 5 sets of random numbers in which each set contains 10 random numbers between 10 and 99 (two-digit values). Then find the sum of the numbers in each set to see the variations.
*/
#include <iostream>
#include <random>
using namespace std;

int main(){
    // Creating a random number generator engine
    random_device rd;
    mt19937 gen(rd());
    // Defining the range for random numbers
    uniform_int_distribution<int> dist(10, 99);
    // Generating 5 set of random numbers
    for (int i = 0; i < 5; i++){
        int sum = 0;
         // Generating and printing 10 random numbers in each set
        for (int j = 0; j < 10; j++){
           int num = dist(gen);
           cout << num << " ";
           sum += num;
        }
        // Printing the sum of the current set
        cout << "Sum: " << sum << endl;
    } 
    return 0;
}