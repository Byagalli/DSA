#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data=value;
        next=NULL;
    }
};

class List{
    public:
    Node* head;
    Node* tail;

    List(){
        head=NULL;
        tail=NULL;
    }

   
void insertAtback(int value){
        Node* newnode=new Node(value);
        if(head==NULL){
            head=tail=newnode;
            tail->next=head;
            return;
        }
        else{
            tail->next=newnode;
            tail=newnode;
            tail->next=head;
        }
    }
    void insertAtfront(int value){
        Node* newnode=new Node(value);
        if(head==NULL){
            head=tail=newnode;
            tail->next=head;
            return;
        }
        else{
            newnode->next=head;
            head=newnode;
            tail->next=head;
        }
    }

    void insertAt(int pos,int value){
        Node* newnode=new Node(value);
        if(pos==0){
            insertAtfront(value);
        }
        else{
            Node* temp=head;
            for(int i=0;i<pos-1;i++){
                temp=temp->next;
            }
            newnode->next=temp->next;
            temp->next=newnode;
        }
    }

    

    void display(){
        
        if(head==NULL){
            cout<<"List is empty"<<endl;
            return;
        }

        cout<<head->data<<"->";
        Node* temp=head->next;

        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
            }
            cout<<head->data<<endl;
        }
    

};

int main(){
    List l;
    l.insertAtback(1);
    l.insertAtback(2);
    l.insertAtback(3);
    l.insertAtback(4);
    l.insertAtback(5);
    l.insertAtfront(6);
    l.insertAtfront(7);
    l.insertAtfront(8);
    l.display();
}



