class Solution {
    public int lengthOfLongestSubstring(String s) {
        Set<Character> set = new HashSet<>();

        int left = 0;
        int maxL = 0;
        int i = 0;

        while (i < s.length()) {
            char c = s.charAt(i);
            if (!set.contains(c)) {
                set.add(c);
                i++;

                // if (i - left > maxL)
                //     maxL = i - left;

                maxL = Math.max(maxL, i - left);

            } else {
                set.remove(s.charAt(left));
                left++;
            }
        }
        return maxL;

    }
}