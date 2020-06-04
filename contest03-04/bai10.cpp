// nối dây 1 vs chi phí nối dây thứ i và thứ j là a[i]+a[j]

#include<bits/stdc++.h>

using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
       long long n;
       cin>>n;
       long long a[n+5];
        priority_queue<int,vector <int>,greater<int> > pq;
        for(int i=0;i<n;i++){
            cin>>a[i];
            pq.push(a[i]);
        }       
        long long ans=0;
        while(pq.size()!=1){
            long long x=pq.top();
            pq.pop();
            long long y=pq.top();
            pq.pop();
            long long tmp=x+y;
            ans+=tmp;
            pq.push(tmp);
        }
        cout<<ans;
        cout<<endl;
   }
}