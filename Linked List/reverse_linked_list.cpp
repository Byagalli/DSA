#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
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

    // void push_front(int val){
    //     Node* n=new Node(val);
    //     if(head==NULL){
    //         head=tail=n;
    //         return;
    //     }
    //     else{
    //         n->next=head;
    //         head=n;
    //     }
    // }

    void push_back(int val){
        Node* n=new Node(val);
        if(head==NULL){
            head=tail=n;
            return;
        }
        else{
            tail->next=n;
            tail=n;
        }
    }

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

       
    void reverse(){
        Node* prev=NULL;
        Node* current=head;
        Node* next=NULL;
        while(current!=NULL){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        head=prev;
    }
};

int main(){
    List l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.display();
    l.reverse();
    l.display();
    return 0;
}