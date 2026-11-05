/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume
 * caller calls free().
 */
int** transpose(int** matrix, int matrixSize, int* matrixColSize,
                int* returnSize, int** returnColumnSizes) {

    int rows = matrixColSize[0];
    int cols = matrixSize;

    int** m = (int**)malloc(rows * sizeof(int*));

    for (int i = 0; i < rows; i++) {
        m[i] = (int*)malloc(cols * sizeof(int));
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            m[i][j] = matrix[j][i];
        }
    }

    *returnSize = matrixColSize[0];
    *returnColumnSizes = (int*)malloc(rows * sizeof(int));
   
    for (int i = 0; i < rows; i++) {
        (*returnColumnSizes)[i] = cols;
    }
    return m;
}