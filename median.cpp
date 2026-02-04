#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
     ll n,k;
     cin>>n>>k;

     vector<ll>v(n*k);

     for(ll i=0;i<n*k;i++){
         cin>>v[i];
     }
     ll m=n-((n+1)/2);
     ll p=(n*k-1)-m;

     ll sum=0;
     while(k--){
        sum+=v[p];

        p=p-m-1;

     }

     cout<<sum<<endl;
}

int main(){
   ll t;
   cin>>t;
   while(t--){
      solve();
   }
}
