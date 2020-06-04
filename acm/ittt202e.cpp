// chế tạo tên lửa n tầng vs trọng lượng tối thiểu

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a[30]={0};
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        s[i]=s[i]-'a'+1;
        a[s[i]]++;
    }
    int sum=0;
    int mark=0;
    for(int i=1;i<=26;i++){
        if(a[i]!=0){
            sum+=i;
            i++;
            mark++;
        }
        if(mark==k) break;
    }
    if(mark==k) cout<<sum<<endl;
    else cout<<"-1";
}