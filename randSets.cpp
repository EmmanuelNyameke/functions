/*
 Show how to call the rand function to create a random number belonging to the following set: 2, 4, 6, 8, 10. 
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    // Seeding the random number generator with current time
    srand(time(0));
    // Generating a random index within the range of the set
    int index = rand() % 5;
    // Creating an array to represent the set
    int numbers[] = {2, 4, 6, 8, 10};
    // Getting the random number from the set using the generated index
    int randomNumber = numbers[index];
    // Displaying the result
    cout << "Random number: " << randomNumber << endl;
    return 0;
}