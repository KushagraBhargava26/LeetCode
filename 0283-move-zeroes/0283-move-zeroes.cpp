class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int current = 0;
        int next = 0;
        while(next <= n-1){ 
            if(nums[current] == 0){
                // next++;
                if(nums[next] != 0){
                    swap(nums[current],nums[next]);
                    current++;
                }else{
                    next++;
                }
            }else{
                current++;
                next++;
            }
        }
    }
};