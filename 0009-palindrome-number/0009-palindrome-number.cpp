class Solution {
public:
    bool isPalindrome(int x) {

        if(x < 0){
            return false;
        }

        int sum = 0;
        int num = x;

        while(num != 0){
            int digit = num % 10;
            sum = (1ll * sum * 10) + digit;
            num = num / 10;
        }

        if(sum == x){
            return true;
        }else{
            return false;
        }
    }
};