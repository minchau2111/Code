#include <bits/stdc++.h>
using namespace std;

main()
{
	unsigned long long count=0;
	for (int n=1;n<=1e5;n++)
	{
		int nn=0;
		while (n!=0)
		{
			nn=n%10+nn*10;
			n=n/10;
		}
		if (nn==n) count++;
	}
	cout << count;
}

