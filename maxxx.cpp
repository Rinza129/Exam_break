#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
     ll n;
     cin>>n;

     vector<ll>v(n);
     for(ll i=0;i<n;i++){
         cin>>v[i];
     }

     auto it=max_element(v.begin(),v.end());
     v.erase(it);

     ll sum=0;
     for(ll i=0;i<v.size()-1;i++){
         sum+=abs(v[i+1]-v[i]);
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
