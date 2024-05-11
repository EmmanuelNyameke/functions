/*  Writing a short program to find the result of the following function calls. 
a. abs (25) and abs (−23) 
b. floor (44.56) and floor (−23.78) 
c. ceil (25.23) and ceil (−2.89)
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
     // abs (25) and abs (−23)
     cout << "The absolute number of 25 = " << abs(25) << endl;
     cout << "The absolute number of -23 = " << abs(-23) << endl;
     // floor (44.56) and floor (−23.78)
     cout << "The floor of 44.56 = " << floor(44.56) << endl;
     cout << "The floor of -23.78 = " << floor(-23.78) << endl;
     // ceil (25.23) and ceil (−2.89)
     cout << "The ceil of 25.23 = " << ceil(25.23) << endl;
     cout << "The ceil of -2.89 = " << ceil(-2.89) << endl;
    return 0;
}