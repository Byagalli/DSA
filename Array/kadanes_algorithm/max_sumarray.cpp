// #include<iostream>
// using namespace std;

// int maxsum_array(int arr[],int size)
// {
//     int sum=0;
//     int maxsum=INT_MIN;

   
//     for(int i=0;i<size;i++){
//         sum+=arr[i];
//         if(maxsum<sum)
//         {
//             maxsum=sum;
//         }

//         if(sum<0){
//             sum=0;
//         }
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
    
//     int maximum_value=maxsum_array(arr,size);
//     cout<<"Maximum subarray:"<<maximum_value;

// }