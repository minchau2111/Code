// in ra cac so co ba uoc so nguyen to
#include <bits/stdc++.h> 
using namespace std; 
// sinh ra cac so nguyen to nho hon n
void Solution(int n) { 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
    prime[0] = prime[1] = 0;   
    for (int p=2; p*p<=n; p++) { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true)  { 
           // Update all multiples of p 
           for (int i=p*2; i<=n; i += p) 
              prime[i] = false; 
        } 
    }   
    for (int i=0;  i*i <= n ; i++) 
        if (prime[i]) 
          cout << i*i << " "; 
    cout<<endl;
} 
  
// driver program  
int main() { 
    int T, N; cin>>T;
    while(T--){
    	cin>>N;Solution(N);
	} 
} 

