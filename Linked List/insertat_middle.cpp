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

    void insertArfront(int val){
        Node* newnode=new Node(val);

        if(head==NULL){
            head=tail=newnode;
            return;
        }
        else{
            newnode->next=head;
            head=newnode;
        }
    }

    void insertAtend(int val){
        Node* newnode=new Node(val);

        if(head==NULL){
            head=tail=newnode;
            return;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }

    void insertAtmiddle(int val,int pos){
        Node* newnode=new Node(val);
        Node* temp=head;
        int count=1;
        while(count<pos-1){
            temp=temp->next;
            count++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;

        }
        cout<<"NULL"<<endl;
    }
};

int main(){
    LinkedList l;
    l.insertArfront(1);
    l.insertArfront(2);
    l.insertArfront(3);
    l.insertArfront(4);
    l.insertArfront(5);
    l.insertArfront(6);
    l.insertArfront(7);
//    l.insertAtend(8);
//     l.insertAtend(9);
//     l.insertAtend(10);

    l.insertAtmiddle(11,5);
    l.display();
    return 0;
}