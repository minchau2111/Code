// so nguyen nho nhat chia het cho 1...n

#include <bits/stdc++.h>
using namespace std;


long long ucln(long long x, long long y){
	long long t=y%x;
	while(y>0){
		t=x%y;
		x=y;
		y=t;
	}	
	return x;
}

long long bcnn(long long x, long long y){
	return (x*y)/ucln(x,y);
}


main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long bc=1;
		for(int i=1;i<=n;i++){
			bc=bcnn(bc,i);
		}
		cout<<bc;
		cout<<" ";
	}
	return 0;
}





