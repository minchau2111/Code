// di giay xanh do

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    if(m>n){
        cout<<n<<" ";
        cout<<(m-n)/2;
    }
    else{
        cout<<m<<" ";
        cout<<(n-m)/2;
    }
}