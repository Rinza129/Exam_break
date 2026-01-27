#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;

    if(a==b&&b==c&&c==d){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int main(){
   ll t;
   cin>>t;
   while(t--){
      solve();
   }
}

