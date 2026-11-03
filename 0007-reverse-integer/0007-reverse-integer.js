/**
 * @param {number} x
 * @return {number}
 */
var reverse = function (x) {
    // let rev = parseInt(
    //     Math.abs(x).toString().split("").reverse().join("")
    // );

    let rev = 0;

    while (x !== 0) {
        let digit = x % 10;
        rev = rev * 10 + digit
        x = Math.trunc(x / 10)
    }
    rev = x < 0 ? -rev : rev;

    if (rev < -(2 ** 31) || rev > 2 ** 31 - 1)
        return 0;

    return rev;
};