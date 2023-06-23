class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int i = 0, j = colors.size() - 1;
        int ans = 0;
        while(i<=j){
            if(colors[i]!=colors[j]){
                int temp = abs(i - j);
                ans = max(ans , temp);
                i++;
            }
            else{
                j--;
            }
        }
        i = 0;
        j = colors.size() - 1;
        while(i<=j){
            if(colors[i]!=colors[j]){
                int temp = abs(i - j);
                ans = max(ans , temp);
                i++;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};