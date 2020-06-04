#include<stdio.h>
#include<string.h>

int doixung(char s){
	for(int i=0;i<=s.length()/2;i++){
		if(s[i]!=s[s.length(s)-i-1])
			return 0;
		return 1;
	}
}

int main(){
	char a;
	char b;
	gets(a);
	gets(b);
	char s=strcat(a,b);
	doixung(s);
	if(doixung(s)) printf("yes");
	else printf("no");
	return 0;
}
