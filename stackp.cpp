#include<bits/stdc++.h>
using namespace std;

void solve(){
     cout<<"Number of elements of stack :";
     int n;
     cin>>n;
     int a[n];

     int top=-1;

     //push
     for(int i=0;i<n;i++){
         int value;
         cin>>value;

         if(top==n-1){
            cout<<"stack the overflow \n";
            break;
         }else{
            top++;
            a[top]=value;
         }
     }
     cout<<"elements of stack are :";
     for(int i=top;i>=0;i--){
         cout<<a[i]<<" ";
     }
     cout<<endl;

     cout<<"how many elements you want to pop :";
     int x;
     cin>>x;

     for(int i=0;i<x;i++){
         if(top==-1){
            cout<<"stack the underflow\n";
         }else{
            top--;
         }
     }
     cout<<"after pop the elements of stack :";
     for(int i=top;i>=0;i--){
         cout<<a[i]<<" ";
     }
     cout<<endl;

}

int main(){
   solve();
}
