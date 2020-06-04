#include <bits/stdc++.h>
using namespace std;

long long gcd(long long x, long long y){
    return (!y) ? x : gcd(y, x%y);
}
long long Modulo(string b, long long a){
    long long ans = 0;

    for (int i = 0; i < b.size(); i++)
        ans = (ans * 10 + b[i] - '0') % a;

    return ans;
}
int main(){
    int T;
    cin >> T;
    while (T--){
        long long a;
        string b;
        cin >> a >> b;
        cout << gcd(a, Modulo(b, a)) << endl;
    }
    return 0;
}