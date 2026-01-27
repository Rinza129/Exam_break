#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    if(n%2==1){
        cout<<0<<endl;
    }else{
        cout<<n/4+1<<endl;
    }
}

int main(){
   ll t;
   cin>>t;
   while(t--){
      solve();
   }
}
