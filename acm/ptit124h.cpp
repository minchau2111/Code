// điểm còn lại của hình chữ nhật

#include<bits/stdc++.h>

using namespace std;

int main(){
    int x4,y4;
    int x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if(x1==x2) x4=x3;
    else if(x2==x3) x4=x1;
    else if(x3==x1) x4=x2;
    if(y1==y2) y4=y3;
    else if(y2==y3) y4=y1;
    else if(y3==y1) y4=y2;
    cout<<x4<<" "<<y4;
}