/*
 The Pascal triangle defines the coefficient of the terms (Cn) in the expansion of the binomial (x + y)n = C0 x0yn + C1 x1yn − 1 + ... + Cn-1 xn − 1y1 + Cn xny0 
 Writing a function to find the value’s coefficients for any n.
  */

 #include <iostream>
 #include <cmath>
 using namespace std;

 // Function to calculate the binomial coefficient
 int binomialCoefficient(int n, int k){
    if(k == 0 || k == 1){
        return 1;
    }
    else {
        return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
    }
 }

 // Function to calculate the pascal triangle
 void pascalTriangle(int n){
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= i; j++){
            cout << binomialCoefficient(i, j) << " ";
        }
        cout << endl;
    }
 }

 // Main function
 int main(){
    // Declaring variables
    int n;
    // Prompt and output
    cout << "Enter the number of rows for pascal's triangle: ";
    cin >> n;
    // Displaying the result by calling the function
    pascalTriangle(n);
    return 0;
 }