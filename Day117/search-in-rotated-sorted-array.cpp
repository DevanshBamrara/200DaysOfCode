// Easy Code
class Solution {
public:
    int search(vector<int>& num, int target) {
        int s = 0, e = num.size()-1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(num[mid]==target)
                return mid;
            if(num[s]<=num[mid]){
                
                if(num[s]<=target && target<= num[mid])
                    e = mid - 1;
                else 
                    s = mid + 1;
            }
            else {
                if (num[mid] <= target && target <= num[e])
                    s = mid + 1;
                else
                    e = mid - 1;
            }
        }
        return -1;
    }
};

/*
Complex Code
class Solution {
public:
    int BinarySearch(vector<int>& nums,int target, int s,int e){
        while(s<=e){
            int m = (s+e)/2;
            if(nums[m]==target){
                return m;
            }
            else if(nums[m]>target){
                e=m-1;
            }
            else if(nums[m]<target){
                s=m+1;
            }
        }
        return -1;
    }
     int findMin(vector<int>& nums) 
    {
        int n = nums.size();
        int start = 0, end = n-1;
        if(nums[start] < nums[end])
        {
            return 0;
        }
        while(start <= end)
        {
            int mid = start + (end - start)/2;
            int next = (mid+1)%n;
            int prev = (mid + n - 1)%n;
            if(nums[mid] <= nums[next] && nums[mid] <= nums[prev]){
                return mid;
            }
            if(nums[mid] <= nums[end])
            {
                end = mid - 1;
            }
            else if(nums[start] <= nums[mid])
            {
                start = mid + 1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int min_index = findMin(nums);
        int a1 = BinarySearch(nums , target, 0, min_index - 1);
        int a2 = BinarySearch(nums , target, min_index, n-1);
        if(a1 == -1)
            return a2;
        else
            return a1;
    }
};
*/