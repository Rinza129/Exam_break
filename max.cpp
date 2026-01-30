#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
   ll n;
   cin>>n;
   vector<ll>a(n);

   for(ll i=0;i<n;i++){
       cin>>a[i];
   }
   int m=*max_element(a.begin(),a.end());

   cout<<m*n<<endl;
}

int main(){
   ll t;
   cin>>t;
   while(t--){
      solve();
   }
}
