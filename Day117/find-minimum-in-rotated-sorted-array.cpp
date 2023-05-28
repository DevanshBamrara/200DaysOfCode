class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;
        int n = nums.size();
        int ans = 0 ;
        if(nums[start]<=nums[end])
            return nums[start];
        while(start<=end){
            int mid = start + (end - start)/2;
            int next = (mid + 1) % n;
            int prev = ((mid + n) - 1) % n;

            if(nums[mid] <= nums[prev] && nums[mid] <= nums[next]){
                 ans = nums[mid];
                 break;
            }
            if(nums[0] <= nums[mid])
                start = mid + 1;
            else if(nums[mid] <= nums[end])
                end = mid - 1;
        }
        return ans;
    }
};