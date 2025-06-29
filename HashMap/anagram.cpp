#include <iostream>
#include <unordered_map>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length()) return false;

    unordered_map<char, int> freq;

    for (char c : s) freq[c]++;
    for (char c : t) {
        if (freq[c] == 0) return false;
        freq[c]--;
    }

    return true;
}

int main() {
    string s = "listene";
    string t = "silent";
    
    if (isAnagram(s, t)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}
