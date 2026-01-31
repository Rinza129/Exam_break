#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next=NULL;
};

Node *solve1(){
      Node *head=NULL,*temp=NULL,*last=NULL;

      int n;
      cin>>n;

      for(int i=0;i<n;i++){
          int v1;
          cin>>v1;

          temp=new Node();
          temp->data=v1;
          temp->next=NULL;

          if(head==NULL){
             head=temp;
             last=temp;
          }else{
              last->next=temp;
              last=temp;
          }
      }
      return head;

}
Node *solve2(){
      Node *head=NULL,*temp=NULL,*last=NULL;

      int m;
      cin>>m;

      for(int i=0;i<m;i++){
          int v2;
          cin>>v2;

          temp=new Node();
          temp->data=v2;
          temp->next=NULL;

          if(head==NULL){
             head=temp;
             last=temp;
          }else{
              last->next=temp;
              last=temp;
          }
      }
      return head;

}

Node *add(Node *head1,Node *head2){
       if(head1==NULL){
           return head2;
       }
       Node *temp=head1;

       while(temp->next!=NULL){
          temp=temp->next;
       }
       temp->next=head2;

       return head1;

}

void display(Node *head){

      while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;

      }
      cout<<endl;


}



int main(){

    cout<<"Enter first linked list :"<<endl;
    Node *head1=solve1();

    cout<<"Enter second linked list :"<<endl;
    Node *head2=solve2();

    Node *merged=add(head1,head2);

    cout<<"Merged Linked list :";
    display(merged);

}
