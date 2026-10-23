class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int current = 1;
        int count = 0;
        int n = arr.size();
        int i = 0;
        while (count < k) {
            if (i < n && arr[i] == current) {
                i++;
            } else {
                count++;
            }
            if (count == k) {
                return current;
            }
            current++;
        }
        return current;
    }
};