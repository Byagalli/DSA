#include<iostream>
using namespace std;

int linearsearch(int arr[],int size,int target)
{
   for(int i=0;i<size;i++)
   {
    if (arr[i]==target)
    {
        return arr[i];
    }
    
   }

   return -1;
}


int main(){

    int size,arr[100];
    cout<<"Enter the size of an array:";
    cin>>size;

    cout<<"Enter the elements of an array: \n";
    for(int i=0;i<size;i++)
    {
     cin>>arr[i];
    }

    cout<<"The entered elements are:";
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" "<<"\n";
  
    int target;
    cout<<"Enter the target:";
    cin>>target;




   linearsearch(arr,size,target);




}