/* Show how to call the rand function to create a random number that can only be 0 or 1 and simulates the tossing of a coin
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    // Seeding the random number generator 
    srand(time(0));
    // Generating a random number between 0 and 1
    int randomNumber = rand() % 2;
    // Checking the value of randomNumber and displaying the result
    if(randomNumber == 0){
        cout << randomNumber << "-" << "Heads" << endl;
    }
    else {
        cout << randomNumber << "-" << "Tails" << endl;
    }
    return 0;
}