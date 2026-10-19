class Solution {
public:
    bool wordPattern(string pattern, string s) {

        unordered_map<char, string> char_to_word;
        unordered_map<string, char> word_to_char;

        stringstream ss(s);
        string word;
        int i = 0;

        while (ss >> word) {
            if (i >= pattern.length()) {
                return false;
            }

            char c = pattern[i];
            if (char_to_word.count(c) && char_to_word[c] != word) {
                return false;
            }
            if (word_to_char.count(word) && word_to_char[word] != c) {
                return false;
            }

            char_to_word[c] = word;
            word_to_char[word] = c;
            i++;
        }

        if (i != pattern.length()) {
            return false;
        }
        return true;
    }
};