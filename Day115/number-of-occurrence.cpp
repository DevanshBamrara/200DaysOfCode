class Solution{
public:	
	int count(int nums[], int n, int target) {
	   int start, end, fir = -1, las = -1;
        // First
        start = 0;
        end = n - 1;
        while(start<=end){
            int mid = start + (end - start)/2;
            if(nums[mid] == target){
                fir = mid;
                end = mid - 1;
            }
            else if(nums[mid] < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        // Last
        start = 0;
        end = n - 1;
        while(start<=end){
            int mid = (start + end)/2;
            if(nums[mid] == target){
                las = mid;
                start = mid + 1;
            }
            else if(nums[mid] < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        if(fir==-1)
            return 0;
        int ans = las - fir;
        return ans+1;
	}
};