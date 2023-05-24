class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> m;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])!=m.end()){
                int t = abs(m[nums[i]]-i);
                if(t<=k){
                    return true;
                }
                else{
                    m[nums[i]] = i;
                }
            }
            else{
                m.insert({nums[i], i });
            }
        }
        return false;
    }
};