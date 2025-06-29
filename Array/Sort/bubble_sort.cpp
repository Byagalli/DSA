#include<iostream>
using namespace std;

int bubble_sort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

            cout<<arr[i];
        }
    }
    
}


int main(){

    int size,arr[100];

    cout<<"Enter the size of an array:";
    cin>>size;

    cout<<"Enter the elements of array:";
    for(int i=0;i<size;i++)
    {
      cin>>arr[i];
    }

    cout<<"The elements of an array:";
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";

    bubble_sort(arr,size);

}