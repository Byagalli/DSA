#include<iostream>
using namespace std;

int main()
{
    int a=0,b=1,n;
    int nextterm;

    cout<<"Enter the n value:";
    cin>>n;

    cout<<"Fibonacci sequence:";
    for(int i = 0; i<n; i++)
    {
     cout<<a<<" ";
     a=b;
     nextterm=a+b;
     b=nextterm;
     

    }

   

    return 0;
    
}