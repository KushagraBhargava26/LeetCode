class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> map;

        for(char c : s){
            map[c]++;
        }

        vector<pair<char,int>>result;
        for(auto &p: map){
            result.push_back(p);
        }
        
        sort(result.begin(),result.end(),[](auto& a, auto& b){
            return a.second > b.second;
        });

        string ans="";
        for(auto &it : result){
            ans.append(it.second,it.first);
        }
        return ans;
    }
};