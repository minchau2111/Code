// dem so uoc so cua n!
#include <bits/stdc++.h> 
using namespace std; 
typedef long long int ll; 
  
// Sieve of Eratosthenes to mark all prime number 
// in array prime as 1 
void sieve(int n, bool prime[]) { //tim cac so nguyen to bang sang
    // thiet lap moi so la 1
    for (int i=1; i<=n; i++) 
        prime[i] = 1;       
    prime[1] = 0; //so 1 khong la nguyen to
    for (int i=2; i*i<=n; i++) { 
        if (prime[i])  { //danh dau cac so khong phai nguyen to
            for (int j=i*i; j<=n; j += i) 
                prime[j] = 0; 
        } 
    } 
} 
int expFactor(int n, int p) { //tra lai cac so la uoc cua n!
    int x = p; 
    int exponent = 0; 
    while ((n/x) > 0)  { 
        exponent += n/x; 
        x *= p; 
    } 
    return exponent; 
} 
  
// so cac uoc so cua n!
ll countFactors(int n) { 
    // thiet lap gia tri ban dau
    ll ans = 1;       
    bool prime[n+1]; //tim cac so nguyen to
    sieve(n, prime);   
    // Multiply exponent (of primes) added with 1 
    for (int p=1; p<=n; p++)  { 
        // if p is a prime then p is also a 
        // prime factor of n! 
        if (prime[p]==1) 
            ans *= (expFactor(n, p) + 1); 
    }   
    return ans; 
} 
int main(void) { 
	int T, N;cin>>T;
	while(T--){
		cin>>N;
		cout<<countFactors(N)<<endl;
	}	
} 

