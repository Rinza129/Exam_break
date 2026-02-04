#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,k,x;
    cin>>n>>k>>x;
    vector<ll>a(n);

    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    ll sum=0;

    for(ll i=0;i<n-k;i++){
        sum+=a[i];
    }
    //cout<<sum;
    cout<<sum+k*x<<endl;
}

int main(){

   solve();

}
