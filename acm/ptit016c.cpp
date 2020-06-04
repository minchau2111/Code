// số mà vị trí chẵn là số chẵn vị trí lẻ là số lẻ

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        s="a"+s;
        int n=s.size();
        int check=true;
        for(int i=1;i<n;i++){
            if((s[i]-'0')%2==1 && i%2==0) check=false;
            if((s[i]-'0')%2==0 && i%2==1) check=false;  
        }
        if(check==true) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}