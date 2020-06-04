//sinh to hop chap k cua 1, 2,.., n

#include <bits/stdc++.h> 
#define MAX 100

using namespace std;   
int X[MAX], n, k, OK=1,dem=0;

void Init(void){//thiet lap X[]={1, 2, ..,k}
	cin>>n>>k;
	for(int i=1; i<=k; i++)
		X[i]=i;
}

void Result(void){//dua ra tap con hien tai
	cout<<"\n Ket qua "<<++dem<<":";
	for(int i=1; i<=k; i++) cout<<X[i]<<" ";
}

void Next_Combination(void){//sinh ra tap con tiep theo
	int i=k;//xuat phat tu ben phai
	while(i>0 && X[i]==n-k+i){//trong khi x[i]=n-k+i
		i--;//lui i di 1
	}
	if(i>0) {//gap x[i] !=n-k+i
		X[i]= X[i]+1;//tang X[i] len 1
		for(int j=i+1; j<=k;j++) //tu thanh phan tiep theo
			X[j]=X[i]+j-i; //duoc tinh theo cong thuc nay
	}
	else OK=0;//ket thuc
}

int main(void){
	Init();//thiet lap tap con dau tien
	while(OK){//lap khi tap con chua phai cuoi cung
		Result();//dua ra tap con hien tai
		Next_Combination();//sinh ra tap con tiep theo
	}
}

