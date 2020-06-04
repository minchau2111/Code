#include <stdio.h>

long long check(long long n)
{
	int a[100], j=0;
	while(n--)
	{
		a[j]=n%10;
		n/=10;
		j++;
	}
	for (int i=0;i<j-1;i++) 
		if (a[i]>a[i+1])  return 0;
		else if (i==j-2) return 1;
}

int n;
int main()
{
	int test;
	scanf("%d", &test);
	while(test--)
	{
		scanf("%d", &n);
		long long d = 1 , c = 9 ;
		for (int i=1;i<n;i++) d*=10;
		for (int i=1;i<n;i++) c=c*10+9;
		int count=0;
		int a[100] ;
		if (n==1)  printf("10\n");
		else 
		{
			for (long long i=d;i<=c;i++)
			{
				if (check(i)==1) count++;
			}
			printf("%d\n", count);
		}	
	}

	return 0;
	
}