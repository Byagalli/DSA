#include<iostream>
using namespace std;
#include<unordered_map>;

int main(){
    unordered_map<int,int>map1;
    unordered_map<int,int>map2;

    int arr1[100],arr2[100],n1,n2;

    cout<<"Enter the size of the first array:";
    cin>>n1;

    cout<<"Enter the elements of the first array:";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }

    cout<<"Enter the size of the second array:";
    cin>>n2;

    cout<<"Enter the elements of the second array:";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }

    for(int i=0;i<n1;i++){
        map1[arr1[i]]++;
    }

    for(int i=0;i<n2;i++){
        map2[arr2[i]]++;
    }

    if(map1==map2){
        cout<<"Both the arrays are equal"<<endl;
    }
    else{
        cout<<"Both the arrays are not equal"<<endl;
    }

    return 0;   

}

