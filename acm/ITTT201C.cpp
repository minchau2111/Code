#include <bits/stdc++.h>
#define i64 long long
#define fi first
#define se second
#define rz resize
#define pb push_back
#define mp make_pair
#define whatIs(a) cerr << #a " is " << (a) << endl;
 
const int N = 200005;
const long long base = 1e9+7;
const long long inf = 1e18+7;
 
using namespace std;
 
void Solve(){
    i64 a[N];
    for(int i=0;i<3;i++) cin >> a[i];
    sort(a,a+3);
    if(a[2]<=a[0]+a[1]+1) cout << "YES"<<endl;
    else cout << "NO"<<endl;
 
}
 
int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}
