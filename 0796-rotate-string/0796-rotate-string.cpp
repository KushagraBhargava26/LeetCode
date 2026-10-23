class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();

        if (goal.length() != s.length()) {
            return false;
        }
        for (int i = 0; i < n; i++) {
            if (goal[0] != s[i]) {
                continue;
            }
            string rotated = s.substr(i) + s.substr(0, i);
            if (rotated == goal) {
                return true;
            }
        }
        return false;
    }
};