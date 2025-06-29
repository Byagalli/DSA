#include<iostream>
using namespace std;
#include<unordered_map>

int main(){

    //  array elements into map
    // unordered_map<int,int>map;

    // int arr[100],n;

    // cout<<"Enter the size of the array:";
    // cin>>n;

    // cout<<"Enter the elements of an array:";
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }

    // for(int i=0;i<n;i++){
    //     map[arr[i]]=i;
    // }

    // for(auto val:map){
    //     cout<<val.first<<"->"<<val.second<<endl;
    // }
    
    // return 0;

    // Frequency count of elements in an array
    unordered_map<int,int>map;

     int arr[100],n;

    cout<<"Enter the size of the array:";
    cin>>n;

    cout<<"Enter the elements of an array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // for(int i=0;i<n;i++){
    //     map[arr[i]]=i;
    // }

    // for(auto val:map){
    //     cout<<val.first<<"->"<<val.second<<endl;
    // }
    
    for(int i=0;i<n;i++){
        map[arr[i]]++;
    }

    cout<<"frequency count of the elements in the array:"<<endl;
    for(auto val:map){
        cout<<val.first<<"->"<<val.second<<endl;
    }

    return 0;

}
