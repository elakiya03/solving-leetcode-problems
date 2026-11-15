class Solution {
    public char findTheDifference(String s, String t) {
        Map<Character, Integer> m = new HashMap<>();

        for (char c : s.toCharArray()) {
            m.put(c, m.getOrDefault(c, 0) + 1);
        }

        for (char c : t.toCharArray()) {
            if (m.getOrDefault(c, 0) == 0) {
                return c;
            }
            m.put(c, m.get(c) - 1);
        }

        return '\0';
    }
}