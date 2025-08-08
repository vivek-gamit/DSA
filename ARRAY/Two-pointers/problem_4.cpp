//Given a string, check if it reads the same forward and backward (i.e., it’s a palindrome).

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s) {
    int left = 0;
    int right =  s.length()-1;

    while(left <= right){

        if(s[left] != s[right]){
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    string str = "racecar";

    if (isPalindrome(str)) {
        cout << "\"" << str << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << str << "\" is not a palindrome." << endl;
    }

    return 0;
}
