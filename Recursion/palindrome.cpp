#include<iostream>
using namespace std;

bool palindrome(string s,int st,int end){
    if(st>end){
        return true;
    }

    if(s[st]!=s[end]){
        return false;
    }

    return palindrome(s,st+1,end-1);
}

int main(){
    string s;
    cout<<"enter the string:";
    cin>>s;
    
    bool result=palindrome(s,0,s.length()-1);
    if(result){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl;
    }

    return 0;
}