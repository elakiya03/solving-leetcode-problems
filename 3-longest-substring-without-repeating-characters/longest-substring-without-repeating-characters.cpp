class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set;

        int left = 0;
        int i = 0;
        int maxLen = 0;

        while (i < s.length()) {
            if (set.find(s[i]) == set.end()) {
                set.insert(s[i]);
                i++;

                maxLen = max(maxLen, i - left); // update here
            } else {
                set.erase(s[left]);
                left++;
            }
        }

        return maxLen;
    }
};