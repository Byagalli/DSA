#include<iostream>
using namespace std;

int alternateswap(int arr[],int size)
{   
    int i;
    for(int i=0;i<size;i+2)
    {
        swap(arr[i],arr[i+1]);
    }
    
    

}

int main(){

    int size,arr[100];

    cout<<"Enter the size:";
    cin>>size;

    cout<<"enter the elements:";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
alternateswap(arr,size);

for(int i=0;i<size;i++)
{
    cout<<"alternate swap:"<<alternateswap<<" ";
}



return 0;

}



