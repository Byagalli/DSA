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

class LinkedList{

    public:
    Node* head;
    Node* tail;

    public:
    LinkedList(){
        head=NULL;
        tail=NULL;
    }

    void insertAtfront(int val){
        Node* n=new Node(val);

        if(head==NULL){
            head=tail=n;
            return;
        }

        n->next=head;
        head=n;

        
    }

    void display(){

        Node* temp=head;

        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }
    

};

int main(){

    LinkedList l;
    l.insertAtfront(10);
    l.insertAtfront(20);
    l.insertAtfront(30);
    l.insertAtfront(40);
    l.display();

    return 0;
}