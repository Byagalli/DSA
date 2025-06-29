#include<iostream>
using namespace std;
#include<vector>

class Stack{
   
    vector<int>v;

    public:

    void push(int val){
        v.push_back(val);
    }

    void pop(){
        if(v.empty()!=0){
        v.pop_back();
        cout<<"Element popped"<<endl;
        }
        else{
            cout<<"Stack is empty"<<endl;
        }
    }

    void top(){

        if(v.empty()!=0){
            cout<<"Top element is "<<v.back()<<endl;
        }
        else{
            cout<<"Stack is empty"<<endl;
        }
        
    }


    bool empty(){

        return v.size()==0;
    }

};

int main(){

    Stack s;
    int choice;

    
    while(true){

        

        cout<<"1.Push"<<endl<<"2.Pop"<<endl<<"3.Return Top"<<endl<<"4.Check Empty"<<endl<<"5.Exit"<<endl;
        cout<<"Enter your choice:";
        cin>>choice;


        

        if(choice==1){
            int val;
            cout<<"enter value"<<endl;
            cin>>val;
            s.push(val);
            
        }

        else if(choice==2){
            s.pop();
            
        }

        else if(choice==3){
            s.top();
          
        }

        else if(choice==4){
            s.empty();
            if(s.empty()){
                cout<<"Stack is empty"<<endl;
            }
            else{
                cout<<"Stack is not empty"<<endl;
            }
        }

        else if(choice==5){
            cout<<"Exiting..."<<endl;
            break;
        }

        else{
            cout<<"Invalid NUmber";
        }


    }

    return 0;

}

    


