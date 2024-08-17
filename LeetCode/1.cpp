#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result = {}; int flag = 0;
        while (flag != nums.size()) {
            for (int i = flag + 1; i < nums.size(); ++i) {
                if (nums[flag] +  nums[i] == target) {
                    result.push_back(flag);
                    result.push_back(i);
                }
            }
            flag++;
        }
        return result;
    }
};