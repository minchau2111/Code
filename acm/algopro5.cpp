// số may mắn tạo bởi số 6 và số 9

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    long long sum=0;
    long long ans=1;
    for(int i=1;i<=n;i++){
        ans*=2;
        sum+=ans;
    }
    cout<<sum;
}