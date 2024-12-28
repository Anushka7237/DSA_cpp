// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    string s = "Help others";
    int left = 0, right = s.length() - 1;
    while (left < right) {
        // Skip spaces
        if (s[left] == ' ') {
            left++;
        } else if (s[right] == ' ') {
            right--;
        } else {
            // Swap characters
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
    cout << s;
    return 0;
}
