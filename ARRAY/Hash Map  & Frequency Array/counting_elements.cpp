#include <bits/stdc++.h>
using namespace std;

int countElements(vector<int>& arr) {
    unordered_map<int, int> freq;
    int n = arr.size();

    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    int count = 0;
    for(auto &p : freq){
        int num = p.first;
        int value = p.second;

        if(freq.find(num + 1) != freq.end()){
            count += value;
        }
    }

    return count;
}

int main() {
    vector<int> arr = {1, 2, 3, 6, 7};
    cout << countElements(arr) << endl; // Output: 2
}
