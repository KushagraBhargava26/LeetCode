class Solution {
public:
    bool isPerfectSquare(int num) {
        
        int left = 2;
        int right = num /2;
        if(num <= 1){
            return true;
        }

        while(left <= right){
            int mid = left + (right - left) / 2;

            if(mid == num / mid && num % mid == 0){
               return true;
            }
            else if(mid > num / mid){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        return false;  
    }
};