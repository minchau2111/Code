#include <bits/stdc++.h>
#define i64 long long
#define fi first
#define se second
#define rz resize
#define pb push_back
#define mp make_pair
#define whatIs(a) cout << #a " is " << (a) << endl;
 
const int N = 200005;
const long long base = 1e9+7;
const long long inf = 1e18+7;

using namespace std;
void Solve(){
    string s;
    getline(cin,s);
    int n=s.size();
    stack <string> a;
    string tmp;
    for(int i=0;i<=n;i++){
        if(s[i] ==' ' || i==n){
            a.push(tmp);// dua xau tmp vao stack
            tmp.clear();
        }
        else
            tmp+=s[i];
    }
    while(a.size()){
        cout << a.top();// lay gia tri cua dinh
        cout << ' ';
        a.pop();
    }
    cout << endl;
}
int main(){
    int T=1;
    cin >> T;
    cin.ignore(); // khu dau cach
    while(T--){
        Solve();
    }
    return 0;
}
