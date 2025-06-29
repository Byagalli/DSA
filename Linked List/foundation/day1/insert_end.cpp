#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int val){
        data=val;
        next=NULL;

    }
};

class Linkedlist{
     
    public:
    Node* head;
    Node* tail;

    public:
    Linkedlist(){
    head=NULL;
    tail=NULL;
    }

    void insertAtback(int val){
        Node* newnode=new Node(val);

        if(head==NULL){
            head=tail=newnode;
            return;
        }

        tail->next=newnode;
        tail=newnode;
    }

    void dispaly(){
        Node* temp=head;

        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;

        }

        cout<<"NULL";
    }

};

int main(){
    Linkedlist l;
    l.insertAtback(10);
    l.insertAtback(20);
    l.insertAtback(30);
    l.dispaly();
    
    return 0;
}