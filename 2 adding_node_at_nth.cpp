//adding a node at nth pos and deleting a node at nth pos

#include <iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};
struct node* head;

void insert(int data,int n){
    node * temp1 = new node();
    temp1->data = data;
    temp1->next=NULL;
    if(n==1){
        temp1->next = head;
        head = temp1;
        return;
    }
    node* temp2 = head;
    for(int i=0;i<n-2;i++){
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1; 
}

void print(){
    struct node* temp1 =head;
    cout<<"List is: ";
    while(temp1 != NULL){
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
    cout<<endl;
}

void Delete(int n){
    struct node* temp1 = head;
    if(n==1){
        head = temp1->next;
        delete[] temp1;
        return;
    }
    for(int i=0;i<n-2;i++){
        temp1=temp1->next;
    }
    struct node* temp2 = temp1->next;
    temp1->next = temp2->next;
    delete[] temp2;
}

int main(){
    head = NULL;
    insert(2,1);
    insert(3,2);
    insert(4,1);
    insert(5,2);
    print();
    int n;
    cin>>n;
    Delete(n);
    print();
    return 0;
}