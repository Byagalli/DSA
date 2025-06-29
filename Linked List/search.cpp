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


    int search(int key){
        Node* temp=head;
        int pos=1;
        while(temp!=NULL){
            if(temp->data==key){
                return pos;
            }
            pos++;
            temp=temp->next;
        }
        return -1;
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
    l.push_back(4);
    l.push_back(5);
    cout<<l.search(4)<<endl;
    cout<<l.search(6)<<endl;
    l.display();
    return 0;
}