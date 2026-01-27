#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
     ll n;
     cin>>n;
     set<ll>u;
     for(int i=0;i<n;i++){
        int x;
        cin>>x;
        u.insert(x);
     }
     ll opp=2*u.size()-1;

     cout<<opp<<endl;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
       solve();
    }
}
