//Given an array or string, reverse it in-place using the Two Pointers technique.

#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    int left = 0;
    int right = n-1;

    while(left <= right){

        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;

    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, n);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
