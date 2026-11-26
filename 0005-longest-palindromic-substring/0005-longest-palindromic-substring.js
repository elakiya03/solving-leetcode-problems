/**
 * @param {string} s
 * @return {string}
 */
var longestPalindrome = function (s) {
    let start = 0;
    let maxl = 0;

    function expand(left, right) {
        while (left >= 0 && right < s.length && s[left] === s[right]) {
            left--;
            right++;
        }

        let curr = right - left - 1;

        if (curr > maxl) {
            maxl = curr;
            start = left + 1;
        }
    };

    for (let i = 0; i < s.length; i++) {
        expand(i, i)
        expand(i, i + 1);
    }

    return s.substring(start, start + maxl);
};