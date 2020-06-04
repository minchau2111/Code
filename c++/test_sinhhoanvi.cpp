#include <bits/stdc++.h>
using namespace std;

int n;
int a[1000];
void init();
void display();
bool islast();
void gentNext();

void init(){
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
}

void display(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<" ";
}

bool islast(){
	for(int i=1;i<=n;i++){
		if(a[i]!=n-i+1) return false;
	}
	return true;
}

void gentNext(){
	int pos=-1;
	for(int i=n;i>1;i--){
		if(a[i-1]<a[i]){
			pos=i-1;
			break;
		}
	}
	for(int i=n;i>=1;i--){
		if(a[i]>a[pos]){
			swap(a[i],a[pos]);
			break;
		}
	}
	int l=pos+1;
	int r=n;
	while(l<r){
		swap(a[l],a[r]);
		l++;
		r--;
	}
}

main()
{
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		init();
		display();
		while(!islast()){
			gentNext();
			display();
		}
		cout<<endl;
	}
	return 0;

}

