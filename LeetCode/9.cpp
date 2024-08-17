#include <string>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        int cnt_ = 0;
        for (int i = 0; i < to_string(x).length(); ++i) {
            if (to_string(x)[to_string(x).length() - i - 1] == to_string(x)[i]) {
                cnt_++;
            }
        }
        if (cnt_ == to_string(x).length()) {
            return true;
        }
        else {
            return false;
        }
    }
};