#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
     ll n;
     cin>>n;

     if(n==2){
        cout<<2<<endl;

     }else if(n==3){
         cout<<3<<endl;
     }else if(n%2==1){
         cout<<1<<endl;
     }else{
          cout<<0<<endl;
     }
}

int main(){
   ll t;
   cin>>t;
   while(t--){
      solve();
   }
}
