#include<bits/stdc++.h>
using namespace std;
#define ll long

void solve(){
     ll n;
     cin>>n;
     ll a[n];
     ll num=0;

     for(ll i=0;i<n;i++){
         cin>>a[i];
         if(a[i]==2){
            num++;
         }
     }
     ll cont=0,r;
     if(num%2==1){
        cout<<-1<<endl;

     }else if(num==0){
         cout<<1<<endl;

     }else{
        for(ll i=0;i<n;i++){
            if(a[i]==2){
               cont++;
               if(cont==num/2){
                  r=i;
                  break;

               }
            }
        }
        cout<<r+1<<endl;
     }

}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}
