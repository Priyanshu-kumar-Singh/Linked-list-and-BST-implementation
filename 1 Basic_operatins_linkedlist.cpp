//Linked list

//adding a node at beginning of a list

#include <iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};
struct node* head;

void insertatbeg(int x){
    node * temp = new node;
    temp->data = x;
    temp->next=head;
    head = temp;
}

void insert(int x,int n){
    if(n==0){
        node* temp = new node();
        (*temp).data=x;
        (*temp).next=NULL;
        head = temp;
    }
    else{
        node*temp = new node;
        temp->data=x;
        temp->next = NULL;
        node* temp1 = head;
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp1->next = temp;
    }
}

void print(){
    struct node* temp =head;
    cout<<"List is: ";
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    head = NULL;
    cout<<"How many Numbers"<<endl;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter The Num"<<endl;
        cin>>x;
        insertatbeg(x);
        //insert(x,i);
        print();
    }
    return 0;
}          
                  