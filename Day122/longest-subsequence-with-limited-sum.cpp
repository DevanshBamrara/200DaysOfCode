class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int> presum;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            presum.push_back(sum);
        }
        vector<int> ans;
        for(int j=0;j<queries.size();j++){
            int l=0,h=presum.size()-1,a=0;
            while(l<=h){
                int mid = l+(h-l)/2;
                if(presum[mid]<=queries[j]){
                    a = mid + 1;
                    l = mid + 1;
                }
                else if(presum[mid]<queries[j]){
                    l = mid + 1;
                }
                else{
                    h = mid - 1;
                }
            }
            ans.push_back(a);
        }
        return ans;
    }
};