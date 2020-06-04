// in ra cac so co ba uoc so nguyen to
#include <bits/stdc++.h> 
typedef long long int ll;
using namespace std; 
// sinh ra cac so nguyen to nho hon n
void Solution(ll n) { 
    bool *prime=new bool[n+1]; //sai cho nay
    memset(prime, true, sizeof(prime)); 
    prime[0] = prime[1] = 0;   
    for (ll p=2; p*p<=n; p++) { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true)  { 
           // Update all multiples of p 
           for (ll i=p*2; i<=n; i += p) 
              prime[i] = false; 
        } 
    }   
    int ans=0;
    for (ll i=0;  i*i <= n ; i++) 
        if (prime[i]) 
          ans++;
    cout<<ans<<endl;
} 
  
// driver program  
int main() { 
    ll T, N; cin>>T;
    while(T--){
    	cin>>N;Solution(N);
	} 
} 

