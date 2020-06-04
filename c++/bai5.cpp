//tim uoc chung lon nhat cua P lap lai c lan va Q lap lai y lan

#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,x,y;
		cin>>a>>x>>y;
		int P,Q;
		for(int i=0;i<x;i++){
			P=a*10+a;
		}
		for(int i=0;i<y;i++){
			Q=a*10+a;
		}
		cout<<P<<" "<<Q;
	/*	while(P!=Q){
			if(P>Q) P=P-Q;
			else Q=Q-P;
		}
		cout<<P;*/
	}
}
