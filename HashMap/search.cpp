#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> map;

    // Insert
    map["apple"] = 10;
    map["banana"] = 20;

    // Search
    if (map.find("apple") != map.end()) {
        cout << "Found apple: " << map["apple"] << endl;
    } else {
        cout << "apple not found\n";
    }

    if (map.find("mango") != map.end()) {
        cout << "Found mango: " << map["mango"] << endl;
    } else {
        cout << "mango not found\n";
    }

    return 0;
}
