class Solution {
    public int minMoves(int[] nums) {
        int sum = Arrays.stream(nums).sum();
        int min = Arrays.stream(nums).min().getAsInt();

        // This works because incrementing n-1 elements is equivalent to
        // decrementing 1 element. To make all elements equal, we need to
        // bring all elements down to the minimum value.
        return sum - ( nums.length * min);
        
    }
}