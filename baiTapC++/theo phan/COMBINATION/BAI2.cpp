//sinh xau nhi phan nguoc co do dai n
#include <bits/stdc++.h> 
#define MAX 100
using namespace std;   
int X[MAX], n, OK=1,dem=0;
void Init(void){//thiet lap X[]={1, 1, ..,1}
	cout<<"Nhap n ="; cin>>n;
	for(int i=1; i<=n; i++)
		X[i]=1;
}
void Result(void){//dua ra xau nhi phan hien tai
	cout<<"\n Ket qua "<<++dem<<":";
	for(int i=1; i<=n; i++) cout<<X[i]<<" ";
}
void Next_Bit_String(void){//sinh ra xau tiep theo
	int i=n;//xuat phat tu ben phai
	while(i>0 && X[i]==0){//trong khi x[i]=1
		X[i]=1; i--;//thay doi x[i]=0
	}
	if(i>0) //gap x[i] =0
		X[i]=0;//doi thanh 1
	else OK=0;
}
int main(void){
	Init();//thiet lap xau dau tien
	while(OK){//lap khi chua phai cuoi cung
		Result();//dua ra xau hien tai
		Next_Bit_String();//sinh ra xau tiep theo
	}
}

