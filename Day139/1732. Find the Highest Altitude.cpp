// 1732. Find the Highest Altitude

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans = 0, num = 0;
        for(int i=0;i<gain.size();i++){
            num = num + gain[i];
            ans = max(ans,num);
        }
        return ans;
    }
};