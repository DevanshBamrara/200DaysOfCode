class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr[0]-arr[1], c = 0;
        for(int i=1;i<arr.size()-1;i++){
            if(n!=arr[i]-arr[i+1]){
                return false;
            }
        }
        return true;
    }
};