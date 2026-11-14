class Solution {
    public int[] sortedSquares(int[] nums) {
        int left = 0;
        int right = nums.length - 1;
        int[] res=new int[nums.length];
        int k = nums.length - 1;

        while (left <= right) {
            int l = nums[left] * nums[left];
            int r = nums[right] * nums[right];

            if (l < r) {
                res[k--] = r;
                right--;
            } else {
                res[k--] = l;
                left++;
            }
        }

        return res;
    }
}