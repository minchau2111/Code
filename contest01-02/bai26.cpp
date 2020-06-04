// đổi chỗ các chữ số k lần để đk số lớn nhất

#include<bits/stdc++.h>

using namespace std;

string s;
int n;

void Try(int k, string &max){
    if(k==0) return;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(s[j]>s[i]){
                swap(s[i],s[j]);
                if(s>max) max=s;
                Try(k-1,max);
                swap(s[i],s[j]);
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        cin.ignore();
        cin>>s;
        n=s.size();
        string max=s;
        Try(k,max);
        cout<<max<<endl;
    }
}