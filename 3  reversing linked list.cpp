//Reversing using Iterative method
/*

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

void REVERSE(){
    struct node *current, *prev, *Next;
    current = head;
    prev = NULL;
    while(current!=NULL){
         Next = current->next;
         current->next = prev;
         prev = current;
         current = Next;
    }
    head = prev;
    }

int main(){
    head = NULL;
    insert(2,1);
    insert(3,2);
    insert(4,1);
    insert(5,2);
    print();
    REVERSE();
    print();
    return 0;
} 
*/





// Printing elements of list And reversing a list using recursion
/*

#include <iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};
void print(struct node* p){
    if(p == NULL){
        cout<<endl;
        return;
    }
    cout<<" "<<p->data;
    print(p->next);
}

void Reverseprint(struct node* p){//here we are not reversing the linked listt only printing it in reverse order
    if(p == NULL){
        return;
    }
    Reverseprint(p->next);
    cout<<" "<<p->data;
}

void Reverse(struct node* p){
    struct node* head;
    if(p->next == NULL){
        head = p;
        return;
    }
    Reverse(p->next);
    struct node* q = p->next;
    q->next = p;
    p->next=NULL;
}
struct node* Insert(struct node* head,int data){
    node *temp =new node();
    temp->data = data;
    temp->next= NULL;
    if(head == NULL)head = temp;
    else{
        node* temp1 = head;
        while(temp1->next != NULL) temp1 = temp1->next;
        temp1->next = temp;
    }
    return head;
    }

int main(){
    struct node* head = NULL;
    head = Insert(head,2);
    head = Insert(head,4);
    head = Insert(head,6);
    head = Insert(head,5);
    print(head);
    Reverseprint(head);
    Reverse(head);
    print(head);
    return 0;
}       */
