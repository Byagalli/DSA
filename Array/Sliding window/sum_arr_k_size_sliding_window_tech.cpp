#include<iostream>
using namespace std;


int findmax(int arr[],int k,int size)
{
    int maxsum=0;
    int windosum=0;

    for (int i = 0; i < k; i++)
    {
        windosum+=arr[i];
    }


    for (int end= k; end <size ; end++)
    {
       windosum=windosum+arr[end]-arr[end-k];

       if (maxsum<windosum)
       {
        maxsum=windosum;
       }

       
       
    }

    
    return maxsum;
    

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

    cout<<"enter the the value of substring k:";
    cin>>k;

   int maximum=findmax(arr,k,size);

   cout<<"Maximum:"<<maximum;

}