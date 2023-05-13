class Solution {
public:
    int signFunc(int x){
        if(x>0)
        return 1;
        else if(x<0)
        return -1;
        return 0;
    }
    int arraySign(vector<int>& nums) {
        long long pro = 1;
        for(auto x : nums){
            pro *= signFunc(x);
        }
        return signFunc(pro);
    }
};