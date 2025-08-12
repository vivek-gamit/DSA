#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 3, 3, 5, 1, 0, 5};
    vector<int> freq(11, 0); // frequency array for 0 to 10

    for (int num : nums) {
        freq[num]++;
    }

    for (int i = 0; i < freq.size(); i++) {
        if (freq[i] > 0) {
            cout << i << " appears " << freq[i] << " times" << endl;
        }
    }
}
