// Sang Eratosthenes
// tim cac so nguyen to nho hon n 
#include <bits/stdc++.h> 
using namespace std;   
void Eratosthenes(int n) { 
    bool prime[n+1]; //tao mang bool n + 1 phan tu
    memset(prime, true, sizeof(prime)); //dien vao gia tri true  
    for (int p=2; p*p<=n; p++) { 
        if (prime[p] == true){ //neu la nguyen to 
            for (int i=p*p; i<=n; i += p) //cac so khong phai nguyen to
                prime[i] = false; 
        } 
    } 
    for (int p=2; p<=n; p++) //cac so nguyen to tu 2 den n
       if (prime[p]) 
          cout << p << " "; 
    cout<<endl;
}  
// Driver Program to test above function 
int main(void) { 
    int T, N; cin>>T;
    while(T--){
    	cin>>N; Eratosthenes(N);
	}
}
