#include<iostream>
using namespace std;

void swapAlternate(int arr[], int n)
{
    for(int i=0;i<n;i+=2)
    {
        if(i+1<n)
        {
            swap(arr[i],arr[i+1]);

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

    cout<<"The elements before swapping:";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    swapAlternate(arr,n);

    cout<<"After alternate swapping:";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

}