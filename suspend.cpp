#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
     ll n,y,r;
     cin>>n;

     cin>>y>>r;

     ll s=y/2+r;
     cout<<min(n,s)<<endl;
}

int main(){
   ll t;
   cin>>t;
   while(t--){
      solve();
   }
}
