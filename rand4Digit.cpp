/*
Writing a function to create four-digit random integers in the range 1111 to 9999. Eliminate any number that has a zero in it. Then create 100 numbers and print them in a table with 10 numbers to a line.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generateAndPrintNumbers(){
    //Seed the random number generator 
    srand(static_cast <unsigned int> (time(nullptr)));
    int count = 0;
    for(int i = 0; i < 100; i++){
        // Generating a random number between 1111 and 9999
        int num = rand() % (9999 - 1111 + 1) + 1111;
        // Checking if the number contains any zero
        bool hasZero = false;
        int tempNum = num;
        while(tempNum > 0){
            if(tempNum % 10 == 0){
                hasZero == true;
                break;
            }
            tempNum /= 10;
        }
        //If the number doesn't have any zeros, print it
        if(!hasZero){
            cout << num << "\t";
            count++;
            // Print a newline after every tenth number
            if(count % 10 == 0){
                cout << endl;
            }
        }
    }
}

int main(){
    generateAndPrintNumbers();
    return 0;
}