// chia hết cho 2

#include <bits/stdc++.h>

using namespace std;

void solve()
{
	long long n;
	cin >> n;
	long long cnt=0;
	for(int i=1;i<=sqrt(n);i++)
	{
			if(n%i==0)
			{
				long long j=n/i;
				if(j==i)
				{
					if(i%2==0) cnt++;
				}
				else
				{
					if(i%2==0) cnt++;
					if(j%2==0) cnt++;
				}
			}
	}
	cout << cnt<<endl;
}
main ()
{
	int k;
	cin >> k;
	while(k--) solve();
 return 0;
}