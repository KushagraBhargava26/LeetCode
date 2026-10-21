class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> map;
        int largestLucky = -1;
        for(int num : arr){
            map[num]++;
        }

        for(auto & pair : map){
            if(pair.second == pair.first){
                largestLucky = max(largestLucky,pair.first);
            }
        }
        return largestLucky;
    }
};