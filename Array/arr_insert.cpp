#include<iostream>
using namespace std;

int main(){
    int arr[100],size,pos,val,i;

    cout<<"enter the size:";
    cin>>size;

    cout<<"Enter the elemets:";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    cout<<"Entered elements:";
    for(i=0;i<size;i++)
    cout<<arr[i]<<" ";
    cout<<endl;

    cout<<"Entered the position where you want to insert the elemet:";
    cin>>pos;

    cout<<"enter the value you want to insert:";
    cin>>val;


}