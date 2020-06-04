#include<iostream>
#include<string>

using namespace std;

void add(string a,string b){	// cong hai so lon
	string res="";
	while(a.length()<b.length()) a="0"+a;
	while(a.length()>b.length()) b="0"+b;
	int carry=0;	// bien nho
	int tmp;
	for(int i=a.length()-1;i>=0;i--){
		tmp=(a[i]-48)+(b[i]-48)+carry;
		carry=tmp/10;
		tmp%=10;
		res=(char)(tmp+48)+res;
	}
	if(carry>0) res="1"+res;
	cout<<"\nAdd: "<<res<<endl;
}

void sub(string a,string b){	// tru hai so lon
	string res="";
	while(a.length()<b.length()) a="0"+a;
	while(a.length()>b.length()) b="0"+b;
	int borrow=0;
	int tmp;
	bool ok;
	if(a<b){
		swap(a,b);
		ok=true;
	}
	for(int i=a.length()-1;i>=0;i--){
		tmp=(a[i]-48)-(b[i]-48)-borrow;
		if(tmp<0) {
			borrow=1;
			tmp+=10;
		}
		else borrow=0;
		res=(char)(tmp+48)+res;
	}
	while(res[0]=='0'&&res.length()>1 ) res.erase(0,1);
	if(ok) res="-"+res;
	cout<<"\nSub: "<<res<<endl;
}

void Mul(string a,string b){	// nhan hai so lon
	string res="";
	int n=a.length();
	int m=b.length();
	int len=n+m-1;
	int *A=new int[len];
	for(int i=0;i<=len;i++) A[i]=0;
	for(int i=n-1;i>=0;i--){
		for(int j=m-1;j>=0;j--){
			A[i+j+1]+=(a[i]-48)*(b[j]-48);
		}
	}
	for(int i=len;i>=0;i--){
		A[i-1]+=A[i]/10;
		A[i]%=10;
	}
	for(int i=len;i>=0;i--){
		res=(char)(A[i]+48)+res;
	}
	while(res.length()>1&&res[0]=='0') res.erase(0,1);
	cout<<"\nMul: "<<res<<endl;
}

int main(){
	string a,b;
	cin>>a>>b;
	add(a,b);
	sub(a,b);
	Mul(a,b);
	return 0;
}

