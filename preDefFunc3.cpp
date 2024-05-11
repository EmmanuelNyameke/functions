/* Writing a short program to find the result of the following function calls. The value of PI is defined in the text. 
a. sin (0) and sin (PI) 
b. cos (0) and cos (PI) 
c. tan (0) and tan (1) 
d. asin (0) and asin (1) 
e. acos (0) and acos (1) 
f. atan (0) and atan (1)
*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    // Declaring constant PI
    const double PI = 3.142;
    // sin (0) and sin (PI)
    cout << "The sine of 0 = " << sin(0) << endl;
    cout << "The sine of PI = " << sin(PI) << endl;
    // cos (0) and cos (PI)
    cout << "The cosine of 0 = " << cos(0) << endl;
    cout << "The cosine of PI = " << cos(PI) << endl;
    // tan (0) and tan (1)
    cout << "The tan of 0 = " << tan(0) << endl;
    cout << "The tan of 1 = " << tan(1) << endl;
    // asin (0) and asin (1)
    cout << "The asin of 0 = " << asin(0) << endl;
    cout << "The asin of 1 = " << asin(1) << endl;
    // acos (0) and acos (1) 
    cout << "The acos of 0 = " << acos(0) << endl;
    cout << "The acos of 1 = " << acos(1) << endl;
    // atan (0) and atan (1)
    cout << "The atan of 0 = " << atan(0) << endl;
    cout << "The atan of 1 = " << atan(1) << endl;
    return 0;
}