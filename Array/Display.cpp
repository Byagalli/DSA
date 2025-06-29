#include<iostream>
using namespace std;

int main() {
    
    int n,a[100];

    cout<<"Enter the size of an array:";
    cin>>n;

    cout<<"Enter the elements of an array:";
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }

    cout<<"The elements of an array:";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" \n";

    cout<<"The second element="<<a[1]<<"\n";

    cout<<"The size of array:"<<sizeof(a);


}