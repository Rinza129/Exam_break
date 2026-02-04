#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
         cin>>a[i];
    }
    ll mx=0;
    ll cnt=0;
    for(ll i=0;i<n;i++){
        if(a[i]>=mx){
            mx=a[i];
            cnt++;
        }
    }
    cout<<n-cnt<<endl;
}


int main(){
   ll t;
   cin>>t;
   while(t--){
     solve();
   }
}
