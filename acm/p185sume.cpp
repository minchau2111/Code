// bài tập về nhà của jk

#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin>>n;
    long long a[n+5];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    long long min=a[0];
    long long max=a[n-1];
    float mid=(float)(min+max)/2;
    int check=0;
    for(int i=0;i<n;i++){
        if(a[i]==min || a[i]==max || a[i]==mid) check++;
    }
    if(check==n) cout<<"YES";
    else cout<<"NO";
}