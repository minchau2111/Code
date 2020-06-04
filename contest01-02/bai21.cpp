// hoán vị xâu kí tự

#include <bits/stdc++.h>

using namespace std;
int n;
char x[100000];
bool mark[100000];
string s;

void init();
void Try(int i);
void display();

void init(){
    for(int i=1;i<=n;i++){
        mark[i]=true;
    }
}

void Try(int i){
    for(int j=1;j<=n;j++){
        if(mark[j]){
            x[i]=s[j];
            mark[j]=false;
            if(i==n) display();
            else Try(i+1);
            mark[j]=true;
        }
    }
}

void display(){
    for(int i=1;i<=n;i++){
        cout<<x[i];
    }
    cout<<" ";
}

int main() {
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        s=" "+s;
        n=s.size()-1;
        init();
        Try(1);
        cout<<endl;
    }
}