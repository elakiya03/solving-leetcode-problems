/**
 * @param {string} s
 * @param {string} t
 * @return {character}
 */
var findTheDifference = function (s, t) {
    let m = new Map()

    for (let c of s) {
        m.set(c, (m.get(c) || 0) + 1)
    }

    for (let c of t) {
        if (!m.has(c) || m.get(c) === 0) {
            return c;
        }

        m.set(c, m.get(c) - 1);
    }

    // return '';
};