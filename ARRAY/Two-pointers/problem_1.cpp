#include<iostream>
#include<vector>
using namespace std;

bool hasPairWithSum(int arr[], int n, int target){
    int left = 0;
    int right = n-1;

    while(left < right){
        int sum = arr[left] + arr[right];

        if(sum == target){
            cout << "pair found : " << arr[left] << " + " << arr[right] << " = " << sum;
            return true;
        }
        else if (sum < target){
            left ++;
        }else{
            right--;
        }
    }

    cout << "pair not found!!";
    return false;
}

int main(){

    int arr[] = {1, 2, 4, 7, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 15;

    hasPairWithSum(arr, n, target);
    return 0;
}