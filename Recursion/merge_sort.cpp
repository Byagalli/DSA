#include<iostream>
using namespace std;

void merge(int arr[],int st,int mid,int end){

    int i=st;
    int j=mid+1;

    int temp[end-st+1];
    int k=0;

    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
            temp[k]=arr[i];
            i++;
            k++;
        }
        else{
            temp[k]=arr[j];
            j++;
            k++;
        }
    }
     
    while(i<=mid){
        temp[k]=arr[i];
        i++;
        k++;
    }

     while(j<=end){
        temp[k]=arr[j];
        j++;
        k++;
     }
      
        for(int i=st;i<=end;i++){
            arr[i]=temp[i-st];
        }


}


void mergesort(int arr[],int st,int end){

    if(st>=end){
        return;
    }
        int mid=st+(end-st)/2;
        mergesort(arr,st,mid);
        mergesort(arr,mid+1,end);
        merge(arr,st,mid,end);
    

    
}

int main(){

    int arr[100],n;

    cout<<"Enter the size of an array";
    cin>>n;

    cout<<"enter the elements of an array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    //merge sort

    mergesort(arr,0,n-1);

    cout<<"Sorted array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    
}