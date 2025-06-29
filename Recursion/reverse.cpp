#include<iostream>
using namespace std;

string reverseString(string s,int st,int end){
    if(st>=end){
        return s;
    }

    swap(s[st],s[end]);
    return reverseString(s,st+1,end-1);
}

int main(){
    string s;
    cout<<"enter string:";
    cin>>s;

    string result=reverseString(s,0,s.length()-1);
    cout<<"reversed string:"<<result<<endl;
    return 0;
}