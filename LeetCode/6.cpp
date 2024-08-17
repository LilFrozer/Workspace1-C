#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
        string result = ""; int flag_ = 0, cnt_zigzag_elem = numRows - 2, cnt = 0;
        vector <string> w = {};
        if (numRows == 1) {
            return s;
        }
        if (cnt_zigzag_elem == 0) {
            for (int i = 0; i < numRows; ++i) {
                w.push_back("");
            }
            for (int i = 0; i < s.length(); ++i) {
                if (cnt != numRows) {
                    w[cnt] += s[i];
                    cnt++;
                }
                else {
                    w[0] += s[i];
                    cnt = 1;
                }
            }
        }
        else {
            while (flag_ != numRows) {
                w.push_back("");
                if (s[flag_] != '\u0000') {
                    w[flag_] += s[flag_];
                }
                flag_++;
            }
            flag_ = 0;
            for (int i = numRows; i < s.length(); ++i) {
                if (flag_ == 0) {
                    //cout << "A " << s[i] << "\n";
                    w[cnt_zigzag_elem - cnt].push_back(s[i]);
                    cnt++;
                    if (cnt == cnt_zigzag_elem) {
                        cnt = 0;
                        flag_ = 1;
                    }
                }
                else {
                    w[flag_ - 1] += s[i];
                    flag_++;
                    if (flag_ == numRows + 1) {
                        flag_ = 0;
                    }
                }
            }
        }
        for (int i = 0; i < w.size(); ++i) {
            result += w[i];
        }
        return result;
    }
};