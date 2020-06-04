// tim n lon nhat de n! chia het cho pow(p,x)
#include <bits/stdc++.h>   
int Solution(int n, int p) {     
    int x = 0; // thiet lap x ban dau la 0  
    // tinh  x = n/p + n/(p^2) + n/(p^3) + .... 
    while (n) { 
        n = n/ p; 
        x = x + n; 
    } 
    return x; 
}   
// Driver program 
int main() { 	
    int T, n, p;cin>>T;
    while(T--){
        cin>>n>>p;
        cout<<Solution(n,p)<<endl;
    }
    
}  
