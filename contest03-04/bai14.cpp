// tìm số lập phương trong string

#include<bits/stdc++.h>

using namespace std;
vector<string> tmp;
long long n;

string ll_to_string(long long m){
    string ans="";
    while(m>0){
        ans=(char)(m%10+'0')+ans;
        m/=10;
    }
    return ans;
}

string find(string n){
    for(int i=tmp.size()-1;i>=0;i--){
        int l1=n.size();
        int l2=tmp[i].size();
        int k=0;
        for(int j=0;j<l1;j++){
            if(n[j]==tmp[i][k]) k++;
            if(k==l2) return tmp[i];
        }
    }
    return "-1";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        tmp.clear();
        for(long long i=1; i*i*i<=n;i++){
            long long x=i*i*i;
            tmp.push_back(ll_to_string(x));
        }
        cout<<find(ll_to_string(n));
        cout<<endl;
    }
}