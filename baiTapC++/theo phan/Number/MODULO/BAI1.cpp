// C++ program to find factorial of given number 
#include <bits/stdc++.h> 
using namespace std;   
// Ham de qui tim n! 
unsigned int Recur_Factorial(unsigned int n) { 
    if (n == 0)  return 1; 
    return n * Recur_Factorial(n - 1); 
} 
//Tim n! su dung vong lap
unsigned int factorial(unsigned int n) { 
    int res = 1, i; 
    for (i = 2; i <= n; i++) 
        res *= i; 
    return res; 
}   
// Driver code 
int main() { 
    int num = 5; 
    cout << factorial(num) << endl;     
} 
  
