#include<iostream>
#include<vector>
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

     int min=arr[0];
     int max=arr[0];

     for(int i=0;i<size;i++)
     {
        if(max<arr[i]){
            max=arr[i];
        }

        if(min>arr[i])
        {
            min=arr[i];
        }
     }


     cout<<"maximum:"<<max<<endl;
     cout<<"minimum:"<<min;

}
