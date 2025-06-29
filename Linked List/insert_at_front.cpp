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

    public:
    List(){
        head=NULL;
        tail=NULL;
    }


    void push_front(int val){
        Node* n=new Node(val);
        if(head==NULL){
            head=tail=n;
            return;
        }
        else{
            n->next=head;
            head=n;
        }
    }

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

};

int main(){
    List l;
    l.push_front(1);
    l.push_front(2);
    l.push_front(3);
    l.push_front(4);
    l.push_front(5);
    l.push_front(6);

    // l.push_back(4);
    // l.push_back(5);
    l.display();
    return 0;
}