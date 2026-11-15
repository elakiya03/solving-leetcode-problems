/**
 * @param {number[]} nums
 * @return {number}
 */
var minMoves = function (nums) {
    const sum = nums.reduce((a, b) => a + b, 0)
    const min = nums.reduce((a, b) => a < b ? a : b)

    return sum - (nums.length * min);
};