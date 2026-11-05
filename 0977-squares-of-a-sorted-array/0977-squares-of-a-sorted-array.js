/**
 * @param {number[]} nums
 * @return {number[]}
 */
 
var sortedSquares = function (nums) {
    let left = 0
    let right = nums.length - 1
    let k = nums.length - 1

    let res = new Array(nums.length).fill(0)

    while (left <= right) {
        let l = nums[left] * nums[left]
        let r = nums[right] * nums[right]

        if (l < r) {
            // res.unshift(r)
            res[k--] = r
            right--
        }
        else {
            //res.unshift(l)
            res[k--] = l
            left++;
        }
    }
    return res


};