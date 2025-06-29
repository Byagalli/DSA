#include <iostream>
#include <unordered_map>
using namespace std;


int main() {
    string s = "anagram";
    string t = "silent";
    
    unordered_map<char, int> freq;

    for (char c : s) freq[c]++;
    
    for(auto it:freq){
        cout<<it.first<<"-"<<it.second<<endl;
    }
    
    
    return 0;
}
