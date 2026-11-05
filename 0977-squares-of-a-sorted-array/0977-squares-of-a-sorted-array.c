/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {

    int left = 0;
    int right = numsSize - 1;
    int* arr = (int*)malloc(numsSize * sizeof(int));
    int k = numsSize - 1;

    while (left <= right) {
        int l = nums[left] * nums[left];
        int r = nums[right] * nums[right];

        if (l < r) {
            *(arr + k) = r;
            right--;
        } else {
            *(arr + k) = l;
            left++;
        }
        k--;
    }
    *returnSize = numsSize;
    return arr;
}