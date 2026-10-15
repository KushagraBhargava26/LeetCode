class Solution {
public:

    int GCD(int a, int b){
        if(a % b == 0){
            return b;
        }
        return GCD(b,a % b);
    }

    int gcdOfOddEvenSums(int n) {
        int sumEven = n * (n + 1);
        int sumOdd = n * n;  

        return GCD(sumEven,sumOdd);
    }
};