class Solution {
    public boolean isPalindrome(int x) {

        char[] arr = String.valueOf(x).toCharArray();

        // O(n/2) -> O(n)
        for (int i = 0; i < arr.length / 2; i++) {
            if (arr[i] != arr[arr.length - i - 1]) {
                return false;
            }
        }
        return true;

    }
}