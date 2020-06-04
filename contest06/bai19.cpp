// tìm phần tử còn thiếu từ min đến max của mảng;

#include <bits/stdc++.h>

using namespace std;
int x[1000005] = {0};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 5];
        memset(x, 0, sizeof(x));
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            x[a[i]]++;
        }
        sort(a, a + n);
        int min = a[0], max = a[n - 1];
        int dem = 0;
        for (int i = min; i <= max; i++)
        {
            //cout << x[i] << " ";
            if (x[i] == 0)
                dem++;
        }
        cout << dem;
        cout << endl;
    }
}