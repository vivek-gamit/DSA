//Given a sorted array, remove the duplicate elements in-place such that each element appears only once and return the new length of the array. The relative order should be maintained.

#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n) {
    int i = 0;

    for(int j=1; j<n; j++){
        if(arr[j] != arr[i]){
            i++;
            arr[i] = arr[j];
        }
    }

    return i+1;
}

int main() {
    int arr[] = {1, 1, 2, 2, 2, 3, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int newLength = removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nNew length: " << newLength << endl;

    return 0;
}
