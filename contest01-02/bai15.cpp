
#include<bits/stdc++.h>

using namespace std;

string s;
int a[100];
int n;

void sinh(){
    int pos=0;
    for(int i=n;i>0;i--){
        if(a[i-1]<a[i]){
            pos=i-1;
            break;
        }
    }
    for(int i=n;i>pos;i--){
        if(a[i]>a[pos]){
            swap(a[i],a[pos]);
            break;
        }
    }
    int l=pos+1;
    int r=n;
    while(l<r){
        swap(a[l],a[r]);
        l++;
        r--;
    }
}

bool islast(){
    for(int i=1;i<n;i++){
        if(a[i]<a[i+1]) return false;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int tmp;
        cin>>tmp;
        cin>>s;
        n=s.size();
        for(int i=0;i<n;i++){
            a[i+1]=s[i]-'0';
        }
        cout<<tmp<<" ";
        if(islast()) cout<<"BIGGEST";
        else{
            sinh();
            for(int i=1;i<=n;i++){
                cout<<a[i];
            }
        }
        cout<<endl;
    }
}