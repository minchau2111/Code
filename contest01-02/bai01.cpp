// xâu nhị phân kế tiếp

#include<bits/stdc++.h>

using namespace std;

int a[1005];

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cin.ignore();
        int n=s.size();
        for(int i=0;i<n;i++){
            a[i]=s[i]-'0';
        }
        for(int i=n-1;i>=0;i--){
            if(a[i]==0){
                a[i]=1;
                break;
            } 
            else a[i]=0;
        }
        for(int i=0;i<n;i++){
            cout<<a[i];
        }
        cout<<endl;
    }
}