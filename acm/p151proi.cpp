// chữ số cuối cùng
// số nén tối giản

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long sum=100;
        while(sum>9){
            sum=0;
            while(n>0){
                sum+=n%10;
                n/=10;
            }
            n=sum;
        }
        cout<<sum<<endl;
    }
} 
