#include<iostream>
using namespace std;

int findduplicate(int arr[],int n)
{
      int i;
    for(int i=0;i<n;i++){
        for (int j = 0; j < n; j++)
        {
            if(arr[i]==arr[j]){

                return arr[i];
            }
        }
        
    }
}

int main(){

    int n,arr[100];

    cout<<"Enter the size:";
    cin>>n;

    cout<<"Enter elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    
    cout<<"Entered elements:";
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;


    int duplicate=findduplicate(arr,n);
    cout<<"The duplicate elements is:"<<duplicate;
}