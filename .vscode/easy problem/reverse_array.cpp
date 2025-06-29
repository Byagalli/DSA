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

    cout<<endl;

   cout<<"Reverse array:";
   for(int i=size-1;i>=0;i--){
    cout<<arr[i]<<" ";
   }

}