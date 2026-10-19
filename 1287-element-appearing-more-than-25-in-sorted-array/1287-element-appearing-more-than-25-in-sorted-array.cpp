class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> map;
        for(int num: arr){
            map[num]++;
        }

        for(auto&pair : map){
            if(pair.second > n/4){
                return pair.first;
            }
        }
        return -1;
    }
};