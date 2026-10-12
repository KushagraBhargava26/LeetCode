class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length(); 
        int left = 0;
        int right = n - 1;

        if(s == " "){
            return true;
        }

        while(left < right){
            while(left < right &&!isalnum(s[left])){
                left++;
            } 
            while(left < right && !isalnum(s[right])){
                right--;
            } 

            if(tolower(s[left]) != tolower(s[right])){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};