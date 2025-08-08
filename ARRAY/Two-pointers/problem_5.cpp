//Given two sorted arrays, merge them into a single sorted array.

#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSortedArrays(int arr1[], int n1, int arr2[], int n2) {
    vector<int> mer;
    int i = 0;
    int j = 0;

    while(i < n1 && j < n2){
        if(arr1[i] <= arr2[j]){
            mer.push_back(arr1[i]);
            i++;
        }else{
            mer.push_back(arr2[j]);
            j++;
        }
        
        
    }

    while(i < n1){
        mer.push_back(arr1[i]);
        i++;
    }

    while (j < n2){
        mer.push_back(arr2[j]);
        j++;
    }

    return mer;
    
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    vector<int> result = mergeSortedArrays(arr1, n1, arr2, n2);

    cout << "Merged array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
