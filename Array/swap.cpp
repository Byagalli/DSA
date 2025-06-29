#include<iostream>
using namespace std;

void swap(int arr[],int n)
{
   for(int i=0;i<n;i++)
   {
    if(n>1)
    {
        int temp=arr[0];
        arr[0]=arr[n-1];
        arr[n-1]=temp;
    }
   }
}

int main(){

    int n,arr[100];

    cout<<"Enter the size:";
    cin>>n;

    cout<<"enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"The elements before swaapping:";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    swap(arr,n);

    cout<<"The elements after swapping:";
    for (int i = 0; i < n; i++)
    cout<<arr[i]<<" ";
    

}