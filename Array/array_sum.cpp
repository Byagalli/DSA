#include<iostream>
using namespace std;

int main(){

    int n,arr[100];

    cout<<"Enter the size:";
    cin>>n;

    cout<<"enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int sum=0;
    for(int i=0;i<n;i++)
    {
      sum=sum+arr[i];
    }

    cout<<"Sum:"<<sum;
}