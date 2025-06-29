#include<iostream>
using namespace std;

int main(){
    
    int i,n,arr[100];
    
    cout<<"Enter the size:";
    cin>>n;
    
    cout<<"Enter the elements:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Entered elements:"<<" ";
    for(i=0;i<n;i++)
    {
    cout<<arr[i]<<" ";
    }

    cout<<endl;

    
    cout<<"Alternate swap:";

    for(i=0;i<n-1;i+=2)
    {
        swap(arr[i],arr[i+1]);
    }
    for(i=0;i<n;i++)
    cout<<arr[i]<<"  ";

    return 0;
}