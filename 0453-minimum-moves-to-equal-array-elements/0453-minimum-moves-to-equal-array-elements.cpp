class Solution {
public:
    int minMoves(vector<int>& nums) {
        // return accumulate(nums.begin(), nums.end(), 0ll) - (nums.size() * ranges::min(nums));

        int mini = *min_element(nums.begin(), nums.end());

        int ans = 0;

        for(int i = 0; i < nums.size(); i++) {
            ans += nums[i] - mini;
        }

        return ans;
    
    }
};