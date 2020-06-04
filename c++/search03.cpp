// tim so khong co mat trong mang

#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n;
		int sum=(1+n)*n/2;	//tong cac phan tu day du
		int s=0;
		n--;	//
		while(n--){
			cin>>x;
			s+=x;	// tong cac phan tu da nhap
		}
		cout<<sum-s<<endl;
	}
	return 0;
}
