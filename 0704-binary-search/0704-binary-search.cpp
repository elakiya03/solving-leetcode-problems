class Solution {
public:
    int search(vector<int>& arr, int tgt) {
        int left = 0;
        int right = arr.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == tgt)
                return mid;
            else if (arr[mid] > tgt)
                right = mid - 1;
            else
                left = mid + 1;
        }

        return -1;
    }
};