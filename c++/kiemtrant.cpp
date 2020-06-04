#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main(){
	int n,t=0;
	cout<<"nhap n: ";
	cin>>n;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0)
			t++;
	}
	if(t==1) cout<<"khong la so nguyen to";
	if(t==0) cout<<"la so nguyen to";
	
}
