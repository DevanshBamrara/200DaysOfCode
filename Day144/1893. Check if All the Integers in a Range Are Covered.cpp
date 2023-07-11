class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        vector<int> vec(right+1,0);
        for(auto i : ranges){
            for(int j = i[0]; j <= i[1] && j <= right; j++){
                vec[j]++;
            }
        }
        for(int i = left;i <= right; i++){
            if(vec[i]==0)
                return false;
        }
        return  true;
    }
};