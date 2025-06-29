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
            head=newnode;
            tail=newnode;
            return;
        }

        else{
            tail->next=newnode;
            tail=newnode;
        }
    }

    void insertAtfront(int value){
        Node* newnode=new Node(value);
        if(head==NULL){
            head=newnode;
            tail=newnode;
            return;
        }
        else{
            newnode->next=head;
            head=newnode;
        }
    }


    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            // cout<<temp->next<<" ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

    bool search(int key){
        Node* temp=head;
        int pos=1;
        while(temp!=NULL){
            if(temp->data==key){
                cout<<"Elment is found At position: "<<pos<<endl;
                return true;
            }
            temp=temp->next;
            pos++;

        
    }

    cout<<"Element is not found"<<endl;
    return false;
}

       void deleteAtfront(){
        if(head==NULL){
            cout<<"List is empty"<<endl;
            return;
        }
        else{
            Node* temp=head;
            head=head->next;
            delete temp;
        }

       }

        void deleteAtback(){
            if(head==NULL){
                cout<<"List is empty"<<endl;
                return;
            }
            else{
                Node* temp=head;
                while(temp->next!=tail){
                    temp=temp->next;
                }
                delete tail;
                tail=temp;
                tail->next=NULL;
            }
        }

        void deleteAtPos(int pos){
            if(head==NULL){
                cout<<"List is empty"<<endl;
                return;
            }
            else if(pos==1){
                Node* temp=head;
                head=head->next;
                delete temp;
            }
            else{
                Node* temp=head;
                for(int i=1;i<pos-1;i++){
                    temp=temp->next;
                }
                Node* temp1=temp->next;
                temp->next=temp1->next;
                delete temp1;
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

};


int main(){
    List l;
    l.insertAtback(1);
    l.insertAtback(2);
    l.insertAtfront(3);
    l.display();
    l.search(2);
    return 0;

}