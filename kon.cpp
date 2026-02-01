#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
     ll k,x;
     cin>>k>>x;

     for(ll i=0;i<k;i++){
         x=x*2;
     }
     cout<<x<<endl;
}

int main(){
   ll t;
   cin>>t;
   while(t--){
      solve();
   }
}
