// tổng gần nhất với 0

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[n + 5];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        long long min_sum = 1e18 + 7;
        long long tmp1,tmp2=1e18+7;
        for (int i = 0; i < n - 1; i++){
            for (int j = i + 1; j < n; j++){
                tmp1 = a[i] + a[j];
                if(abs(tmp1)<tmp2){
                    min_sum = tmp1;
                    tmp2 = abs(tmp1);
                }
            }
        }
        cout << min_sum;
        cout << endl;
    }
}