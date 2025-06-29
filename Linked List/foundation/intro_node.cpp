#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
  
};

int main(){

    Node* node1=new Node{10,NULL};
    
    Node* node2=new Node{20,NULL}; 

    Node* node3=new Node{30,NULL};


node1->next = node2;   
node2->next = node3;
node3->next = NULL;
    
        cout<<node1->data<<endl;
        cout<<node2->data<<endl;
        cout<<node3->data<<endl;
    
        cout<<node1->next->data<<endl;
        cout<<node2->next->data<<endl;
        cout<<node3->next<<endl; // NULL
    
        return 0;
}