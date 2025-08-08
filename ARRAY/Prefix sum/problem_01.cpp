// basics of prefix sum

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr = {2,4,1,7,9,3};
    int n = arr.size();

    vector<int> prefix(n);

    prefix[0] = arr[0];
    for(int i=1; i<n; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }

    int l = 1, r = 3;

    int sum1 = prefix[r] - prefix[l-1];
    cout << "prefix sum from index "<< l << " to " << r << " is :" << sum1;

    return 0;
 }
