#include<iostream>
using namespace std;

#define MAX 1000

class Queue{
    int front, rear;
    int arr[MAX];

public:
Queue(){
    front=-1;
    rear=-1;
}
         

     void enqueue(int val){
        if(rear==MAX-1){
            cout<<"Queue is full"<<endl;
            return;
        }

        if(front==-1){
            front=0;
        }

        rear++;
        arr[rear]=val;
        cout<<val<<" enqueued to queue"<<endl;
     }

     void dequeue(){
        if(front==-1 || front>rear){
            cout<<"Queue is empty"<<endl;
            return;
        }

        cout<<arr[front]<<" dequeued from queue"<<endl;
        front++;
        if(front>rear){
            front=-1;
            rear=-1;
        }
     }    

        void display(){
            if(front==-1){
                cout<<"Queue is empty"<<endl;
                return;
            }

            cout<<"Queue elements are: ";
            for(int i=front; i<=rear; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
     

};

int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
  
    return 0;
}