#include<iostream>
using namespace std;

int binary_search(int arr[],int item,int low,int high)
{
    while (low<=high)
    {
       int mid=(low+high)/2;

       if(item==arr[mid])
       {
        return mid;
       }

       if (item>arr[mid])
       {
         low=mid+1;
       }

       else{
        high=mid-1;
       }
       
    }
     return -1;

}

int main(){

    int size,arr[100],item;

    cout<<"size of an array:";
    cin>>size;

    cout<<"Elements of array:";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the item to be search:";
    cin>>item;

    int low=0;
    int high=size-1;

    int result=binary_search(arr,item,low,high);

    if(result==-1)
    {
        cout<<"The elements is not found:";
    }
    else{
        cout<<"The elements is found at "<<result;
    }
}
