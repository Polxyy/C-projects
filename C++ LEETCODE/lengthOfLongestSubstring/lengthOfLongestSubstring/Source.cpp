#include <iostream>
#include <string>

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)return false;
        int original = x;
        int reversed = 0;
        while (x > 0) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }

        return original == reversed;
    }
};


int main() {
    Solution sol;
    int a = 121;
    bool asd = sol.isPalindrome(a);
    if (asd)std::cout << " YES " << std::endl;
    else std::cout << "NOO";
}