class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp(n);
        int positive = 0;
        int negative = 1;

        for(int num : nums){
            if(num > 0){
                temp[positive] = num;
                positive = positive + 2;
            }else{
                temp[negative] = num;
                negative = negative + 2;
            }
        }return temp;
    }
};