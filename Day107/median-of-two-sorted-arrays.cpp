class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i = 0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        double ans;
        int s = nums1.size();
        if(s%2!=0){
            int t = s/2;
            ans = nums1[t];
        }
        else{
            double t = nums1[s/2] + nums1[(s/2)-1];
            ans = t/2;
        }
        return ans;
    }
};