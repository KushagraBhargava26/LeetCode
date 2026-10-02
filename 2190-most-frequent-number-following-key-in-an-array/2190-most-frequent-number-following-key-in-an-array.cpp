class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        map<int,int> m;

        int max_count = 0; 
        int result = 0;
        int n = nums.size()-1;
        for(int i = 0; i< n; i++){
            if(nums[i] == key){
                int target = nums[i+1];
                m[target]++;

                if(m[target] > max_count){
                    max_count = m[target];
                    result = target;
                }
            }
        }return result;
    }
};