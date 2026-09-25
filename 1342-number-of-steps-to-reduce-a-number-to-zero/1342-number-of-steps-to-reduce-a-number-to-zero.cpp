class Solution {
public:
    int numberOfSteps(int num) {
        int counter = 0;
        int temp = num;

        while (temp != 0) {
            if (temp % 2 == 0) {
                temp /= 2;
                counter++;
            }

            else {
                temp -= 1;
                counter++;
            }
        }

        return counter;
    }
};