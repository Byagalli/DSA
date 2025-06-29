#include<iostream>
#include<vector>
using namespace std;

int main(){

    // vector<int>v;

    // v.push_back(1);
    // v.push_back(2);

    // for(int i=0;i<v.size();i++){

    //     cout<<v[i]<<" ";
    // }


    int size;

    cout<<"Enter the number of elements:";
    cin>>size;

    vector<int> v;

    cout<<"Enter the elements of array:";
    for(int i=0;i<size;i++){
        int value;
        cin>>value;
        v.push_back(value);
    }

    cout<<endl;

    cout<<"the entered elements are:";
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }


    return 0;
}