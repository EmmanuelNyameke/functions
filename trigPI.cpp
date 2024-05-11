/*
 The value of PI (π) in trigonometry can be calculated as shown below: π = 4 × [ 1 − 1 / 3 + 1 / 5 + ...  + (−1)i + 1 / (2i − 1) ] in which i varies from 1 to n. As n becomes increasingly larger, we get the value of π increasingly closer to the actual value. Writing a function to return the value of π for the given value of n. Then write a program to tabulate the values of i and π for i from 1 to 2001 in increments of 200.*/

 #include <iostream>
 #include <cmath>
 using namespace std;

 // Function to calculate PI
 double calculatePi(int n){
    double pi = 0.0;
    int sign = 1;
    for (int i = 1; i <= n; i++){
        pi += sign * (1.0 / (2 * i - 1));
        sign *= -1;
    }
    return 4 * pi;
 }

 // Main function
 int main(){
    // Tabulating the values of i and pi for i from 1 to 2001 in increments of 200
    for(int i = 1; i <= 2001; i += 200){
        double pi = calculatePi(i);
        cout << "i: " << i << ", pi: " << pi << endl;
    }
    return 0;
 }