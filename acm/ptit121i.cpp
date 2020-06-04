// lap lai cac ki tu

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int tmp;
        cin>>tmp;
        cout<<tmp<<" ";
        int r;
        cin>>r;
        string s;
        cin>>s;
        int n=s.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<r;j++){
                cout<<s[i];
            }
        }
        cout<<endl;
    }
}