//bor phieeus

#include<bits/stdc++.h>

using namespace std;

int main(){
    while(1){
        string s;
        cin>>s;
        if(s=="#") break;
        int x=s.size();
        int y=0,n=0,p=0,a=0;
        for(int i=0;i<x;i++){
            if(s[i]=='Y') y++;
            else if(s[i]=='N') n++;
            else if(s[i]=='P') p++;
            else if(s[i]=='A') a++;
        }
        if(2*a>=x) cout<<"need quorum"<<endl;
        else{
            if(y>n) cout<<"yes"<<endl;
            else if(n>y) cout<<"no"<<endl;
            else cout<<"tie"<<endl;
        }
    }
}