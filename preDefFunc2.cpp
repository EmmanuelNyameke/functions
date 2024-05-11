/* Writing a short program to find the result of the following function calls. 
a. pow (5.0, 3) and  pow (5, −3) 
b. sqrt (44.56) 
c. exp (−6.2) and exp (44.26) 
d. log (16.2) and log10 (14.24)
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    // pow (5.0, 3) and  pow (5, −3)
    cout << "The number, five(5) power three(3) = " << pow(5.0, 3) << endl;
    cout << "The number, five(5) power negative three(-3) = " << pow(5.0, -3) << endl;
    // sqrt (44.56)
    cout << "The square root of 44.56 = " << sqrt(44.56) << endl;
    // exp (−6.2) and exp (44.26)
    cout << "The exponent of -6.2 = " << exp(6.2) << endl;
    cout << "The exponent of 44.26 = " << exp(44.26) << endl;
    // log (16.2) and log10 (14.24)
    cout << "The log of 16.2 = " << log(16.2) << endl;
    cout << "The log of 14.24 = " << log(14.24) << endl;
    return 0;
}