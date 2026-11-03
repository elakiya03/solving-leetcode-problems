class Solution {
    public String longestPalindrome(String s) {
        int start = 0;
        int maxl = 0;

        for (int i = 0; i < s.length(); i++) {
            for (int j = 0; j <= 1; j++) {
                int left = i;
                int right = j + i;

                while (left >= 0 && right < s.length() && s.charAt(left) == s.charAt(right)) {
                    int curr = right - left + 1;

                    if (maxl < curr) {
                        start = left;
                        maxl = curr;
                    }
                    left--;
                    right++;
                }
            }
        }

        return s.substring(start, start + maxl);

    }
}