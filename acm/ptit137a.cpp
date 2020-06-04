// trò chơi dãy số
// trừ hai số cạnh nhau cho đến khi đk dãy bằng nhau

#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[100];
    while(1){
        cin>>a[1]>>a[2]>>a[3]>>a[4];
        int dem=0;
        if(a[1]==0 && a[2]==0 && a[3]==0 && a[4]==0) break;
        while(1){
            if(a[1]==a[2] && a[2]==a[3] && a[3]==a[4] && a[4]==a[1]) break;
            else{
                int x=a[1];
                a[1]=abs(a[1]-a[2]);
                a[2]=abs(a[2]-a[3]);
                a[3]=abs(a[3]-a[4]);
                a[4]=abs(a[4]-x);
                dem++;
            }
        }
        cout<<dem<<endl;
    }
}