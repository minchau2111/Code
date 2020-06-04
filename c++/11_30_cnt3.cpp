#include<stdio.h>
#include<string.h>
int main(){
	char a[450];
	int n,x=0, count1=0, count2=0;
	scanf("%d", &n);
	for(int i=0; i<=n; i++){
		gets(a);
		if(a[i]=='+') count1++;
		if(a[i]=='-') count2++;
	}		
	printf("%d %d", count1, count2);	
	return 0;
}

