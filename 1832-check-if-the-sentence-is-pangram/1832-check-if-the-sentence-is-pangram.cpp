class Solution {
public:
    bool checkIfPangram(string sentence) {
        int s = sentence.size();
        unordered_map<char, int> map;
        if (s < 26) {
            return false;
        }
        for (char c : sentence) {
            map[c]++;
        }
        return map.size() == 26;
    }
};