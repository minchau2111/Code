// ghép hình
// cho ba hình chữ nhật với độ dài
// kiểm tra xem có thể ghép đk hành hình vuông không
// nếu có in ra độ dài cạnh hình vuông

#include<bits/stdc++.h>

using namespace std;

int main(){
    int a1,a2,a3,b1,b2,b3;
    cin>>a1>>b1>>a2>>b2>>a3>>b3;
    if(a1<b1) swap(a1,b1);
    if(a2<b2) swap(a2,b2);
    if(a3<b3) swap(a3,b3);
    if(a1==a2 && a2==a3 && a3==a1 && b1+b2+b3==a1) cout<<a1;
    else{
        if(a1+b2==a3 && a2==b1 && a2+b3==a3) cout<<a3;
        else if(a2+b1==a3 && a1==b2 && a1+b3==a3) cout<<a3;
        else if(b1+b2==a3 && a1==a2 && a1+b3==a3) cout<<a3;
        else if(a3+b2==a1 && a2==b3 && a2+b1==a1) cout<<a1;
        else if(a2+b3==a1 && a3==b2 && a3+b1==a1) cout<<a1;
        else if(b3+b2==a1 && a3==a2 && a3+b1==a1) cout<<a1;
        else if(a3+b1==a2 && a1==b3 && a1+b2==a2) cout<<a2;
        else if(a1+b3==a2 && a3==b1 && a3+b2==a2) cout<<a2;
        else if(b3+b1==a2 && a3==a1 && a3+b2==a2) cout<<a2;
        else cout<<"0";
    }
}

