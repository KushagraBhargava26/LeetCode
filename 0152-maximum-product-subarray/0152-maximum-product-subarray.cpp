class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if(nums.empty()){
            return 0;
        }

        int maxPro = nums[0];
        int minPro = nums[0];
        int result = nums[0];

        for(int i = 1 ; i < n ;i++){
            int currentNum = nums[i];

            if(currentNum < 0){
                swap(maxPro,minPro);
            }

            maxPro = max(currentNum, maxPro * currentNum);
            minPro = min(currentNum, minPro * currentNum);

            result = max(result, maxPro);
        }

        return result;

    }
};