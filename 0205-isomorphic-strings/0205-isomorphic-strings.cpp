class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> s_to_t;
        unordered_map<char, char> t_to_s;

        for (int i = 0; i < s.length(); i++) {
            char charS = s[i];
            char charT = t[i];

            if (s_to_t.count(charS) && s_to_t[charS] != charT) {
                return false;
            }
            if (t_to_s.count(charT) && t_to_s[charT] != charS) {
                return false;
            }

            s_to_t[charS] = charT;
            t_to_s[charT] = charS;
        }
        return true;
    }
};