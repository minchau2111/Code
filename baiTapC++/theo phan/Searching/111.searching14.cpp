#include <bits/stdc++.h>
using namespace std;
int a[100006];
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i = 0; i < n; i++){
			cin >> a[i];	
		}
		int check = 0;
		for(int i = 0; i < n-1; i++){
			for(int j = i+1; j < n; j++){
				if(a[i] == a[j]){
					check = 1;
					cout << a[i] << endl;
					break;
				} 
			}
			if (check == 1) break;
		}
	}
	return 0;
}

