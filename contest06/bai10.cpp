// tìm dãy sắp xếp tăng dần các chữ số từ mảng số đã cho

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
        int x[10] = {0};
        int a[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            while (a[i] > 0)
            {
                int k = a[i] % 10;
                x[k]++;
                a[i] /= 10;
            }
        }
        for (int i = 0; i <= 9; i++)
        {
            if (x[i] != 0)
                cout << i << " ";
        }
        cout << endl;
    }
}