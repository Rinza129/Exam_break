#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
    ll n;
    cin>>n;

    ll a[n];
    map<ll,ll>mp;

    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    ll sum=0;
    for(auto[o,f]:mp){
        if(f>o){
            sum+=(f-o);
        }else if(o>f){
            sum+=f;
        }
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
