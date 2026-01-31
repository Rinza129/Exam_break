#include<bits/stdc++.h>
using namespace std;


void printstack(int st[],int top){
      cout<<"  stack :   ";
      for(int i=0;i<=top;i++){
           cout<<st[i]<<" ";
      }
      cout<<endl;
}

void solve(){
    string postfix;
    cout<<"Enter the posttfix expression :";
    cin>>postfix;

    postfix+=")";

    int st[100];
    int top=-1,i=0;

    while(i<postfix.size()){
         char ch=postfix[i];

         if(ch==' '||ch==','){
             i++;
             continue;
         }

         if(isdigit(postfix[i])){
              int num=0;

              while(i<postfix.size() && isdigit(postfix[i])){
                  num=num*10+(postfix[i]-'0');
                  i++;
              }
              top++;
              st[top]=num;

              cout<<"Symbol:   "<<num<<" ->";
              printstack(st,top);
              continue;

         }else if(ch=='+' || ch=='-'||ch=='*' ||ch=='^'|| ch=='/'){
              int A=st[top];
              top--;
              int B=st[top];
              top--;

              int result=0;
              if(ch=='+')         result=B+A;
              else if(ch=='-')    result=B-A;
              else if(ch=='*')    result=B*A;
              else if(ch=='/')    result=B/A;
              else if(ch=='^')    result=pow(B,A);

              top++;
              st[top]=result;

              cout<<"Symbol:   "<<ch<<" ->";
              printstack(st,top);
              i++;
              continue;
         }
         else if(ch==')'){
             break;
         }
    }

    cout<<"Result"<<st[top]<<endl;

}


int main(){
    solve();
}
