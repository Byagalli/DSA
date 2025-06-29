#include<iostream>
using namespace std;
#include<unordered_map>

int main(){

    unordered_map<char,int>map;

    string str;
    cout<<"Enter the string:";
    cin>>str;

    for(char val:str){
        map[val]++;
    }

    for(auto el:map){
        cout<<el.first<<"->"<<el.second<<endl;
    }

    for(char val:str){
        if(map[val]==2){
            cout<<"First non-repeating character:"<<val<<endl;
            break;
        }
    }
}