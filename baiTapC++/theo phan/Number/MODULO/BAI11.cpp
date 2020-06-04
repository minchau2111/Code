// tim power(x,y)%p 
#include <bits/stdc++.h> 
const unsigned int p = 1000000007;
using namespace std; 
  
/* Iterative Function to calculate (x^y)%p in O(log y) */
unsigned int power(int x, unsigned int y) { 
    unsigned int res = 1; // thiet lap ket qua ban dau la 1  
    x = x % p;  // dua x ve gia tri nho hon hoac bang p  
    while (y > 0) { 
        // neu y le nhan x voi x mod p
        if (y & 1) 
            res = (res*x) % p;   
        // y tro nen chan  
        y = y>>1; // y = y/2 
        x = (x*x) % p;   
    } 
    return res; 
} 
int main(void){
	int T, x, y;cin>>T;
	while(T--){
		cin>>x>>y;
		cout<<power(x,y);
	}
	
}
