class Solution {
public:
    int maxSatisfaction(vector<int>& nums) {
        int maxVal = 0, sum = 0;
        sort(nums.begin(),nums.end(),greater<int>());
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>=0){
                int n = i+1, temp=0;
                for(int j=0;j<=i;j++){
                    if(n==0){
                        break;
                    }
                    else{
                        temp+= nums[j]*n;
                        n--;
                    }
                }
                maxVal = max(maxVal,temp);
            }
            else
                break;
        }

        return maxVal;
    }
};