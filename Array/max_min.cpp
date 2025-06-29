#include<iostream>
using namespace std;

int main(){

    int n,a[10];

    cout<<"Enter the size:";
    cin>>n;

    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int max=a[0];
    int min=a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }

        if (a[i]<min)
        {
            min=a[i];
        }
    }
    

    cout<<"Maximum element:"<<max<<"\n";
    cout<<"Minimum element:"<<min;
    

    
}