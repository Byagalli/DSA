// #include<iostream>
// using namespace std;

// int maxSubarrayKsize(int arr[],int size,int k)
// {
//     int maxsum=0;

//     for (int i = 0; i <=size-k; i++)
//     {
//        int currentsum=0;


//        for (int j = i; j < i+k; j++)
//        {
//         currentsum+=arr[j];
//        }
       
//        if (maxsum<currentsum)
//        {
//         maxsum=currentsum;
//        }

       
       
//     }
//     return maxsum;
    
// }

// int main(){
 
//     int size,arr[100],k;

//     cout<<"Enter array size:";
//     cin>>size;

//     cout<<"enter array elements:";
//     for (int i = 0; i <size; i++)
//     {
//         cin>>arr[i];
//     }

//     cout<<endl;

//     cout<<"entered elemets:";
//     for(int i=0;i<size;i++)
//     cout<<arr[i]<<" ";

//     cout<<endl;

//     cout<<"enter the subarray size:";
//     cin>>k;

//     int maximuSum=maxSubarrayKsize(arr,size,k);
//     cout<<maximuSum;
    
    


// }


#include<iostream>
using namespace std;

int findmax(int arr[],int size,int k)
{
    // int maxsum=0;
    

    // for(int i=0;i<=size-k;i++)
    // {
       
    //    int sum=0;
    //     for(int j=i;j<i+k;j++)
    //     {
    //         sum+=arr[j];
    //     }

    //    if(maxsum<sum)
    //     {
    //         maxsum=sum;
    //     }

   

        
       
    // }

    
    //   return maxsum;

    int sum=0;
    int max_sum=0;

    for(int i=0;i<=size-k;i++){
        sum=0;
        for(int j=i;j<i+k;j++){
            sum+=arr[j];

        }

        if(max_sum<sum){
            max_sum=sum;
        }
    }

    return max_sum;
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

    cout<<"enter the value of k:";
    cin>>k;

    int maximum=findmax(arr,size,k);
    cout<<"maximum sum:"<<maximum;

}