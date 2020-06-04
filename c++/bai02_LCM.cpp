#include <bits/stdc++.h>
using namespace std;


int LCM(int x, int y){
	int z=x*y;
	int t=y%x;
	while(y>0){
		t=x%y;
		x=y;
		y=t;
	}	
	return z/x;
}




main(){
	int bc=1;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int bc=1;
		for(int i=1;i<=n;i++){
			bc=LCM(bc,i);
		}
		cout<<"boi chung nho nhat can tim la: "<<bc;
		cout<<" ";
	}
	return 0;
}





