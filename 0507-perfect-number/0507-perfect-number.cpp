class Solution {
public:
    bool checkPerfectNumber(int num) {
        int n = num;
        if (num <= 1) {
            return false;
        }
        int sum = 1;
        for (int i = 2; i * i < n; i++) {
            if (num % i == 0) {
                sum = sum + i;
                if (i * i != n) {
                    sum = sum + (num / i);
                }
            }
        }
        return sum == num;
    }
};