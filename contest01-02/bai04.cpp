// xâu AB độ dài n

#include <bits/stdc++.h>
using namespace std;

int a[100];
int n;

void nhap(){
	
	for(int i=0;i<n;i++){
		a[i]=0;
	}
	
}

void sinhnhiphan(){
	for(int i=n-1;i>=0;i--){
		if(a[i]==0){
			a[i]=1;
			break;
		}
		else a[i]=0;
	}
}

bool islast(){
	for(int i=0;i<n;i++){
		if(a[i]!=1) return false;
	}
	return true;
}

void display(){
	for(int i=0;i<n;i++){
		if(a[i]==0) cout<<'A';
        else cout<<'B';
	}
	cout<<" ";
}

main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        nhap();
        display();
        while(!islast()){
            sinhnhiphan();
            display();
        }
        cout<<endl;
    }
}
