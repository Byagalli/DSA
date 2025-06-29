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

class Queue{

    Node* front;
    Node* rear;

   
public:
Queue(){
    front=NULL;
    rear=NULL;
}

void enqueue(int val){
    Node* n=new Node(val);
    if(rear==NULL){
        front=rear=n;
        return;
    }
    rear->next=n;
    rear=n;
}

void dequeue(){
    if(front==NULL){
        cout<<"Queue is empty"<<endl;
        return;
    }
    Node* temp=front;
    front=front->next;
    if(front==NULL){
        rear=NULL;
    }
    delete temp;
}

    void display(){
        if(front==NULL){
            cout<<"Queue is empty"<<endl;
            return;
        }
        Node* temp=front;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }



    bool isEmpty(){
        return front==NULL;
    }

    int peek(){
        if(front==NULL){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return front->data;
    }
};

int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout<<"Queue elements: ";
    q.display();

    cout<<"Front element: "<<q.peek()<<endl;

    q.dequeue();
    cout<<"Queue after dequeue: ";
    q.display();

    return 0;
}




