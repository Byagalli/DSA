#include<iostream>
using namespace std;

int binary(int arr[],int n,int target){

    int st=0;
    int end=n-1;
   

    while(st<=end){

    int mid=st+(end-st)/2;

       if(target>arr[mid]){
          
          st=mid+1;
       }

       else if(target<arr[mid]){

          end=mid-1;
       }

       else{
        return mid;
       }
    }
    return -1;

}


int main(){
    int n,arr[100],target;

    cout<<"enter size:";
    cin>>n;

    cout<<"enter the array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"entered elements:";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;

    cout<<"enter the target element:";
    cin>>target;

    int search=binary(arr,n,target);
    cout<<search;

}