// số lần đổi dấu cạnh nhau để được biểu thức đúng

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        vector <int> vt;
        for(int i=0;i<n;i++)
            if(s[i]=='[') vt.push_back(i);
        int pos=0,ans=0,dem=0;
        for(int i=0;i<n;i++){
            if(s[i]=='['){
                dem++;
                pos++;
            }
            else dem--;
            if(dem<0){
                ans+=vt[pos]-i;
                swap(s[i],s[vt[pos]]);
                pos++;
                dem=1;
            }
        }
        cout<<ans;
        cout<<endl;
    }
}