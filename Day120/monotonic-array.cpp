class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size()-1;
        if(nums[0]<=nums[n]){
            for(int i=0;i<n;i++){
                if(nums[i]>nums[i+1])
                    return false;
            }
        }
        else{
            for(int i=0;i<n;i++){
                if(nums[i]<nums[i+1])
                    return false;
            }
        }
    return true;
    }
};