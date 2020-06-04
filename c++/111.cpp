#include<iostream>
#include<string>
using namespace std ;
int main(){
	int t ;
	cin>>t ; 
	while(t--){
		string a ;
		cin>>a ;
		int mark=0 ;
		for(int i=a.length()-2 ; i>=0 ; i--){
			if(a[i]>a[i+1]){
				for(int j=a.length()-1 ; j>i ; j--){
					if(a[i]>a[j]){
						swap(a[i],a[j]) ;
						mark=1 ;
						break ;
					}
				}
				break ;
			}
		}
		if(mark==1) cout<<a<<endl ;
		else cout<<"-1"<<endl ;
	}
}
