// tính tổng sum sau k lần đảo dấu

#include<bits/stdc++.h>

using namespace std ;

int main(){
	int n, k ;
	cin>>n>>k ;
	int a[n] ;
	for(int i=0 ; i<n ; i++) cin>>a[i] ;
	sort(a,a+n) ;
	for(int i=0 ; i<n ; i++){
		if(k==0) break ; 
		else{
			if(a[i]<0){
				a[i]=a[i]*(-1) ;
				k-- ;
			}
			else{
				break ;
			} 
		}
	}
	sort(a,a+n) ;
	if(k!=0 && (k%2)!=0 && a[0]!=0) a[0]*=(-1) ;
	long long sum=0 ;
	for(int i=0 ; i<n ; i++) sum+=a[i] ;
	cout<<sum ;
}