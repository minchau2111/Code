// chuyen sang he luc phan

#include<stdio.h>

void ChuyenHe(int x){
		int t = 0;
		int phantu = 0;
		int arr[100];
		int a = x;
		while (a != 0)
		{
			int chuso = a % 16;
			if (chuso <= 9)
				arr[phantu++] = chuso;
			else if (chuso == 10)
				arr[phantu++] = 'A';
			else if (chuso == 11)
				arr[phantu++] = 'B';
			else if (chuso == 12)
				arr[phantu++] = 'C';
			else if (chuso == 13)
				arr[phantu++] = 'D';
			else if (chuso == 14)
				arr[phantu++] = 'E';
			else if (chuso == 15)
				arr[phantu++] = 'F';
			t++;
			a /= 16;
		}
		printf("\nKetqua la: ");
		for (int i = t - 1; i >= 0; i--)
		{
			if (arr[i] >= 48 && arr[i] <= 57)
				printf("%d", arr[i]);
			else if (arr[i] >= 65 && arr[i] <= 90)
				printf("%c", arr[i]);
		}
}
int main()
{
	int x;
	printf("\nNhap gia tri can doi: ");
	scanf("%d", &x);
	ChuyenHe(x);
	return 0;
}
