int singleNumber(int* nums, int numsSize) {
    int res = 0;

    for (int i = 0; i < 32; i++) {
        int count = 0;

        for (int j = 0; j < numsSize; j++) {
            if (nums[j] & (1u << i))
                count++;
        }

        if (count % 3 != 0) {
            res = res | (1u << i);
        }
    }

    return res;
}

/*
 * This solution finds the number that appears only once when every other
 * number appears exactly three times. It uses bit manipulation to examine
 * all 32 bits of each integer independently. The outer loop iterates through
 * each bit position (0 to 31), while the inner loop checks that particular
 * bit across every number in the array. The expression (1u << i) creates a
 * bitmask with only the current bit position set, and the bitwise AND (&)
 * checks whether that bit is set in each number. If it is, the count is
 * incremented. Since every repeated number appears three times, its set
 * bits contribute a multiple of three to the count. Therefore, count % 3
 * removes the contribution of all repeated numbers, leaving the bit
 * contribution of the unique number. If the remainder is not zero, that
 * bit must be set in the result, so the bitwise OR (|) sets it in res.
 * After all 32 bit positions have been checked, res contains the unique
 * number. The algorithm takes O(32 * n), which simplifies to O(n) time,
 * and uses O(1) extra space.
 */