// #include <iostream>
// #include <unordered_map>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> arr = {2, 3, 2, 4, 5, 3, 4, 2};
//     unordered_map<int, int> freq;

//     for (int num : arr) {
//         freq[num]++;
//     }

//     for (auto it : freq) {
//         cout << it.first << " → " << it.second << endl;
//     }

//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;

int main(){

    int nums[]={2,1,2,1,3,4,2,3,4,5};

    int size=sizeof(nums)/sizeof(nums[0]);

    int arr[101]={0};

    for(int i=0;i<size;i++){

         int num=nums[i];
         arr[num]++;

    }

    
    for(int i=0;i<101;i++){
        if(arr[i]>0){
            cout<<i<<"->"<<arr[i]<<endl;
        }
    }


    return 0;
}


