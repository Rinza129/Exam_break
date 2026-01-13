#include<bits/stdc++.h>
using namespace std;

struct Node{
     int data;
     Node *next;
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
}



int main(){
    solve();
}
