// #include<iostream>
// using namespace std;
// #include<unordered_map>

// int main(){

//     // unordered_map<string,int>map;

//     // map.insert({"ganesh",21});
//     // map.insert({"samarth",22});

//     // // for(auto val:map){
//     // //     cout<<val.first<<" ->"<<val.second<<endl;
//     // // }

//     // cout<<"Marks of ganesh:"<<map["ganesh"]<<endl;
//     // cout<<map["samarth"];

//     // map.erase("ganesh");

//     // // map.clear();

//     unordered_map<int,int>map;

//     map.insert({1,1});
//     map.insert({2,3});


//     map[3]=1;
//     map[4]=1;

//     map[5]=1;

//     cout<<"Value at index 2:"<<map[2]<<endl;

//     if(map.find(8)!=map.end()){
//         cout<<"Key is preset"<<endl;
//     }

//     for(auto val:map){
//         cout<<val.first<<"="<<val.second<<endl;

//     }

// }

#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    unordered_map<int,string>map;

    map[1]="ganesh";
    map[2]="samarth";
    map[3]="siddhi";
    map[4]="siddhi";
    map[5]="Suman";
    map[5]="Sahana";

    for(auto& it:map){
        cout<<it.first<<"="<<it.second<<endl;
    }

    cout<<"Size of map:"<<map.size()<<endl;

    cout<<"Bucket count:"<<map.bucket_count()<<endl;
}
