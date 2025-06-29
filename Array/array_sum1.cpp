#include<iostream>
using namespace std;

int sumarray(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
        
    }
    return sum;
    

}

void reversearray(int arr[],int size)
{
    int i;
    int start=0;
    int end=size-1;

    while (start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"Reverse array:";
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
}

int main(){

    int size,arr[100];

    cout<<"Enter the size:";
    cin>>size;

    cout<<"Enter the elements:";
    for (int i = 0; i <size; i++)
    {
        cin>>arr[i];
    }



    cout<<"Entered elements:";
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    
    
    int total_sum=sumarray(arr,size);
    cout<<endl;
    

    cout<<"The sum of array:"<<total_sum;
    cout<<"\n";

    reversearray(arr,size);

    return 0;

    
    
}