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
    cout<<"Linked list :";
    while(current!=NULL){
        cout<<current->data<<" ";
        current=current->next;
    }
    cout<<endl;

    vector<int>v;

    for(Node *i=head;i!=NULL;i=i->next){
         v.push_back(i->data);
    }
    int key;
    cout<<"Target value :";
    cin>>key;

    int low=0,high=n-1;
    bool found=false;

    while(low<=high){
         int mid=(low+high)/2;

         if(v[mid]==key){
             cout<<"find the target value: "<<key<<"  at position : " <<mid+1<<endl;
             found=true;
             break;

         }else if(v[mid]<key){
             low=mid+1;
         }else{
             high=mid-1;
         }
    }
    if(found==false){
        cout<<"Not found "<<endl;
    }
}


int main(){
    solve();
}

