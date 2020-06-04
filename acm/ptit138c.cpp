#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		for(int i=0;i<s.size();i++){
			if(s[i]>='a' && s[i]<='z') s[i]-=32;
		}
		string x;
		for(int i=0;i<s.size();i++){
			if(s[i]=='A' || s[i]=='B' || s[i]=='C') x+='2';
            if(s[i]=='D' || s[i]=='E' || s[i]=='F') x+='3';
            if(s[i]=='G' || s[i]=='H' || s[i]=='I') x+='4';
            if(s[i]=='J' || s[i]=='K' || s[i]=='L') x+='5';
            if(s[i]=='M' || s[i]=='N' || s[i]=='O') x+='6';
            if(s[i]=='P' || s[i]=='Q' || s[i]=='R' || s[i]=='S') x+='7';
            if(s[i]=='T' || s[i]=='U' || s[i]=='V') x+='8';
            if(s[i]=='W' || s[i]=='X' || s[i]=='Y' || s[i]=='Z')x+='9';
		}
		string a=x;
		reverse(x.begin(),x.end());
        if(a==x) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
	}
}