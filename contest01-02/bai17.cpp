// tìm bội số của n

#include<bits/stdc++.h>

using namespace std;

const int N=100000;
long long B[N+5],u=0;
 
void sinh(int a[] ,int n , int &stop){
	int i=n-1;
	while(a[i]==9 && i>0){
		a[i]=0;
		i--;
	}
	if(i == 0) stop=1;
	else a[i]=9;
}
long long S_sum(int a[] ,int n){
	long long sum=0;
	for(int i=0;i<n;i++){
		sum=sum*10+a[i];
	}
	return sum;
}
void S_sinh(){
	int pos=1;
	int a[20]={0} , stop = 0;
	a[0]=9;
	while(true){
		int stop=0;
		while(stop==0){
			B[u++]=S_sum(a,pos);
			sinh(a,pos,stop);
		}
		pos++;
		if(pos > 15) break;
	}
}
void solve() {
	int n;
	cin>>n;
	for(int i=0;i<u;i++){
		if(B[i] % n == 0){
			cout<<B[i];
			return;
		}
	}
}
main(){
	int t=1;
	S_sinh();
//	for(int i=0;i<u;i++) cout<<B[i] << ' ';
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
} 