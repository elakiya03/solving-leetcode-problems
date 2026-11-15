/**
 * @param {number[][]} matrix
 * @return {number[][]}
 */
var transpose = function (matrix) {
    let rows = matrix.length
    let cols = matrix[0].length
    res = []

    for (let i = 0; i < cols; i++) {
        res[i] = [];
    }
    
    for (let i = 0; i < rows; i++) {
        for (let j = 0; j < cols; j++) {
            res[j][i] = matrix[i][j]
        }
    }
    return res;
};