#include<iostream>
using namespace std;

 
void subArray(int arr[],int size){

    // for(int i=0;i<size;i++){
    //      for(int j=0;j<=i;j++){
    //         cout<<"*"<<" ";
            
    //      }
    //      cout<<endl;
    // }


    for(int i=0;i<size;i++){
         for(int j=0;j<=i;j++){
            cout<<"*"<<" ";
            
         }
         cout<<endl;
    }

    for(int i=size;i>=0;i--){
        for(int j=0;j<=i;j++){
           cout<<"*"<<" ";
           
        }
        cout<<endl;
   }
}


int main(){
 
    int size,arr[100],k;

    cout<<"Enter array size:";
    cin>>size;

    cout<<"enter array elements:";
    for (int i = 0; i <size; i++)
    {
        cin>>arr[i];
    }

    cout<<endl;

    cout<<"entered elemets:";
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";

    cout<<endl;
    
    subArray(arr,size);

}