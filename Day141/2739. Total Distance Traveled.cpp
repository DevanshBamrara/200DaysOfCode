// 2739. Total Distance Traveled

class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int ans = 0;
        while(mainTank>=5 && additionalTank){
            ans += 50;
            additionalTank--;
            mainTank -= 4;
        }
        ans += mainTank * 10;
        return ans;
    }
};