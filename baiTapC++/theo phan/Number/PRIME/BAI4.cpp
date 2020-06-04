//thua so nguyen to nho nhat 
//cua cac so nho hon hoac bang n
#include<bits/stdc++.h> 
const int MAX = 1001;
using namespace std;   
void Solution(int n) { 
    // tao vector luu thua so nguyen to nho nhat
    int  ans[n+1]; 
    for(int i=0; i<=n; i++) ans[i]=0;    
    // luu thua so nho nhat cua 1 la 1 
    ans[1] = 1;   
    for (int i = 2; i <= n; i++) { 
        // ans[i] == 0 co nghia i la nguyen to        
        if (ans[i] == 0) {             
            ans[i] = i; //thua so nh nhat la chinh no  
            // su dung sang eratothesese
            // danh dau no la thua so nho nhat
            for (int j = 2*i; j <= n; j += i) 
                if (ans[j] == 0) 
                   ans[j] = i; 
        } 
    } 
    //in ra thua so nguyen to nho nhat
    for (int i = 1; i <= n; i++) 
        cout <<ans[i]<< " "; 
    cout<<endl;
} 
//chuong trinh chinh
int main(void) { 
	int T, n; cin>>T;
	while(T--){
		cin>>n;
		Solution(n);	
	}
} 
