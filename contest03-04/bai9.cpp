// sap xep cong viec

#include<bits/stdc++.h>

using namespace std;


struct mincy{
	int deadline;
	int profit;
};

bool sapxep(mincy a, mincy b){
	return a.profit>b.profit;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		mincy x[n+5];
		for(int i=0;i<n;i++){
			int tmp;
			cin>>tmp;
			cin>>x[i].deadline>>x[i].profit;
		}
		sort(x,x+n,sapxep);
		bool check[n+5];
		memset(check,true,sizeof(check));
		int job=0, sum=0;
		for(int i=0;i<n;i++){
			for(int j=min(n,x[i].deadline)-1;j>=0;j--){
				if(check[j]){
					job ++;
					sum+=x[i].profit;
					check[j]=false;
					break;
				}
			}
		}
		cout<<job<<" "<<sum;
		cout<<endl;
	}
}