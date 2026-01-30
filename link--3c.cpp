#include<bits/stdc++.h>
using namespace std;

struct Node{
     int data;
     Node *next=NULL;
};

void solve(){
    Node *head=NULL,*temp=NULL,*last=NULL,*current=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int v;
        cin>>v;

        temp=new Node();
        temp->data=v;
        temp->next=NULL;

        if(head==NULL){
            head=temp;
            last=temp;
        }else{
            last->next=temp;
            last=temp;
        }
    }
    current=head;
    cout<<"Linked list: ";
    while(current!=NULL){
        cout<<current->data<<" ";
        current=current->next;
    }
    cout<<endl;
    int target;
    cin>>target;
    int pos;
    cout<<"position :";
    cin>>pos;

    Node *newN=new Node();
    newN->data=target;
    newN->next=NULL;

    current=head;
    if(pos==1){
        newN->next=head;
        head=newN;
    }else{
       for(int i=1;i<pos-1;i++){
          current=current->next;
       }
       newN->next=current->next;
       current->next=newN;
    }
    current=head;
    cout<<"after insertion Linked list: ";
    while(current!=NULL){
        cout<<current->data<<" ";
        current=current->next;
    }
    cout<<endl;


}


int main(){
    solve();
}
