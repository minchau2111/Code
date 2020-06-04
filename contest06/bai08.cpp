// đếm số cặp x^y>y^x;
// if x<y then x^y>y^x;

#include <bits/stdc++.h>

using namespace std;

int count(int x,int y[], int m, int k[]){
    if(x==0) return 0;
    if(x==1)
        return k[0];
    int i = m - 1, ans = 0;
    while(y[i]>x){
        ans++;
        i--;
    }
    ans += (k[0] + k[1]);
    if(x==2)
        ans -= (k[3] + k[4]);
    if(x==3)
        ans += k[2];
    return ans;
}

int countpair(int x[], int y[], int n, int m){
    int k[5] = {0};
    for(int i = 0; i < m; i++)
    {
        if(y[i]<5)
            k[y[i]]++;
        sort(y, y + n);
        int dem = 0;
        for (int i = 0; i < n;i++){
            dem += count(x[i], y, m, k);
        }
        return dem;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int x[n + 5], y[m + 5];
        for (int i = 1; i <= n; i++)
        {
            cin >> x[i];
        }
        for (int i = 1; i <= m; i++)
        {
            cin >> y[i];
        }
        cout << countpair(x, y, n, m);
        cout << endl;
    }
}