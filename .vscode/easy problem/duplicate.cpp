#include<iostream>
using namespace std;

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

   for(int i=0;i<size;i++)
   {
    for(int j=i+1;j<size;j++)
    {
        if(arr[i]==arr[j])
        {
            cout<<arr[i];
        }
        
    }
   }


}