/*
Writing a program that prints the square root of the first 10 integers using the corresponding function in the <cmath> header. Tabulate your result with appropriate headers.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // Tabulating the result
    cout << "Integers" << "\t" << "Square roots" << endl;
    // looping through the numbers
    for(int i = 1; i <= 10; i++){
        cout << i ;
        cout << "\t\t";
        cout << sqrt(i) << endl;
     }
    return 0;
}