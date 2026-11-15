int minMoves(int* arr, int numsSize) {
    long long sum = 0;
    int min = arr[0];

    for (int i = 0; i < numsSize; i++) {
        if (arr[i] < min)
            min = arr[i];

        sum += arr[i];
    }

    return (int)(sum - ((long long)numsSize * min));
}