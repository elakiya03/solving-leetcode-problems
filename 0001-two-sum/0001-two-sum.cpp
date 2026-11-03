
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> m;

        for (int i = 0; i < nums.size(); i++) {
            int res = target - nums[i];
            if (m.find(res) != m.end()) { // res is exist in map
                return {m[res], i};
            }
            m[nums[i]] = i;
        }
        return {};
    }
};