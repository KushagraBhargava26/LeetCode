class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int totalSum = (n*(n+1))/2;
        int currentSum = 0;

        for(int i : nums){
            currentSum += i;
        }
        return totalSum - currentSum;
    }
};