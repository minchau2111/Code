#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    int l=0,r=0,lmax=0,rmax=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='L'){
            l++;
            lmax++;
            ans=max(ans,(lmax-r));
        }
        else if(s[i]=='R'){
            r++;
            rmax++;
            ans=max(ans,(rmax-l));
        }
        else{
            rmax++;
            lmax++;
            ans=max(ans,(rmax-l));
            ans=max(ans,(lmax-r));
        }
    }
    cout<<ans;
}