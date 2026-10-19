class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> map;
        int targetCount = n / 4;
        for(int num: arr){
            map[num]++;
        }

        for(auto&pair : map){
            if(pair.second > targetCount){
                return pair.first;
            }
        }
        return -1;
    }
};