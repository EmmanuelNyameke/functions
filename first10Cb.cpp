/*  Writing a program that prints the cubic root of the first 10 integers using the pow function in the <cmath> header. Tabulate your result with appropriate headers. 
*/

#include <iostream>
#include <cmath>
using namespace std;


void cubicRoot(int num){
    double result = pow(num, 1.0 / 3.0);
    cout << "cubic root of " << num << ": " << result << endl;
}


int main(){
    // Tabulating the headers
    cout << "Integers" << "\t" << "Cubic Roots" << endl;
    // Looping through to display the result in the table above
    for(int i = 0; i <= 10; i++){
       cubicRoot(i);
    }
    return 0;
}