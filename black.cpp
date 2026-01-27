#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,k;
    cin>>n>>k;

    string s;
    cin>>s;
    ll num=0;
    for(int i=0;i<n;i++){
           if(s[i]=='B'){
              num++;
              i+=k-1;
           }
    }
    cout<<num<<endl;

}



int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}
