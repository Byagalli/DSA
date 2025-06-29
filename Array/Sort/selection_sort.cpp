#include<iostream>
using namespace std;

void sort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
       int minindex=i;

        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<minindex)
            {
                minindex=j;
            }

            
        }

        swap(arr[minindex],arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
    cout<<arr[i]<<" ";
    
}

void printarr(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    
}

int main(){

    int size,arr[100];

    cout<<"enter the size:";
    cin>>size;

    cout<<"enter the elements:";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    printarr(arr,size);

    sort(arr,size);

}