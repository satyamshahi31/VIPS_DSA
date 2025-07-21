#include<iostream>
using namespace std;



class node{
    public:
    int data;
    node* next;

    node(int value){
        data = value;
        next = NULL;
    }

};
void printlist(node* head){
    node* temp = head;
    while( temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
 
cout<<endl;
}

void insertatfront(node* &head , int d){
    node* n = new node(d);
    n->next = head;
    head = n;
}

void insertatend(node* &head , int d){
    if(head == NULL){
        head = new node(d);
        return ;
    }
    node* temp = head;
    while( temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new node(d);
    return;
}
int main()
{
    node* n1 = new node(10);
    node* n2 = new node(20);
    node* n3 = new node(30);
    node* head = n1;
    n1->next = n2;
    n2->next = n3;

    printlist(head);
    insertatfront(head , 5);
    printlist(head);
    insertatend(head , 15);
    printlist(head);
    return 0;
}