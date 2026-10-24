class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> map;

        for (char c : s) {
            map[c]++;
        }

        sort(s.begin(), s.end(), [&](char a, char b) {
            if (map[a] != map[b]) {
                return map[a] > map[b];
            }
            return a < b; 
        });
        return s;
    }
};