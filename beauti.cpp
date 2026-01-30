#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    set<ll>s;

    for(ll i=0;i<n;i++){
        cin>>v[i];
        s.insert(v[i]);
    }
    cout<<s.size()<<endl;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}
