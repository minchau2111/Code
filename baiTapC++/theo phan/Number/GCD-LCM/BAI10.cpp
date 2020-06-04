// tim day con k phan tu cua 1, 2,.., n 
// co tong la n va GCD lon nhat
#include <bits/stdc++.h> 
using namespace std; 
// function to generate and print the sequence 
void Solution(int n, int k) { 
    //B1: tim max gcd co the co cua day k phan tu
    int b = n / (k * (k + 1) / 2); //max la b
    if (b == 0) { //neu max gcd=0
        cout << -1 << endl; //khang dinh vo nghiem
  
    } 
	else {           
        int r = 1; //lay gcd lon nhat luc dau la 1  
        // duyet tu 1 den sqrt(n) 
        // day cung la max gcd co the co
        for (int x = 1; x * x <= n; x++) {   
            if (n % x != 0) //neu n khong chia het cho x
                continue; //lam voi so khac
            if (x <= b && x > r) //ghi nhan gcd la x
                r = x;   
            // checks if n/x is smaller than  
            // the max gcd possible and n/x  
            // is greater then the resultant  
            // gcd till now, then r=x 
            if (n / x <= b && n / x > r) 
                r = n / x; 
        } 
  
        // in ra day r, 2r, 3r, (k-1)r 
        for (int i = 1; i < k; i++) 
            cout << r * i << " ";   
        // tinh toan phan tu con lai         
        int res = n - (r * (k * (k - 1) / 2));           
        cout << res << endl; //in ra not
    } 
} 
int main(void) { 
    int T, N, K; cin>>T;
    while(T--){
    	cin>>N>>K;
    	Solution(N,K);
	}
}
