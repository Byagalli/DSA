#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node*prev;

    public:
    Node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

class DoublyList{
    public:
    Node* head;
    Node* tail;

    public:
    DoublyList(){
        
        head=NULL;
        tail=NULL;
    }

    void push_back(int val){
        Node* newnode=new Node(val);

        if(head==NULL){
            head=tail=newnode;
            return;
        }
        else{
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;

        }
        

    }

    void push_front(int val){
        Node* newnode=new Node(val);

        if(head==NULL){
            head=tail=NULL;
            return;
        }
        else{
            newnode->next=head;
            head->prev=newnode;
            head=newnode;
        }
    }

    
    void delete_front(){
        if(head==NULL){
            cout<<"List is empty"<<endl;
            return;
        }
        else{
            Node* temp=head;
            head=head->next;
            head->prev=NULL;
            delete temp;
        }
    }

    void delete_back(){
        if(head==NULL){
            cout<<"List is empty"<<endl;
            return;
        }
        else{
            Node* temp=tail;
            tail=tail->prev;
            tail->next=NULL;
            delete temp;
        }

    }

    void insert(int pos,int val){
        Node* newnode=new Node(val);
        Node* temp=head;
        int count=1;
        while(count<pos-1){
            temp=temp->next;
            count++;
        }
        newnode->next=temp->next;
        temp->next->prev=newnode;
        temp->next=newnode;
        newnode->prev=temp;


    }

    void delete_pos(int pos){
        Node* temp=head;
        int count=1;
        while(count<pos-1){
            temp=temp->next;
            count++;
        }
        Node* del=temp->next;
        temp->next=del->next;
        del->next->prev=temp;
        delete del;




    }
        void display(){
            Node* temp=head;
            while(temp!=NULL){
                cout<<temp->data<<"<=>";
                temp=temp->next;
            }
            cout<<"NULL"<<endl;
        }
    
};


int main(){
    DoublyList l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.display();

    l.push_front(5);
    l.display();
    return 0;
}