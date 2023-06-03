class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        
        map<int,int> m;
        for(auto x : nums){
            m[x] += 1;
        }
        vector<vector<int>> ans;
        while(1){
            int flag = 0;
            vector<int> t;
            for(auto &x : m){
                if(x.second!=0){
                    flag = 1;
                    t.push_back(x.first);
                    x.second -= 1;
                }
            }
            if(flag==1)
            ans.push_back(t);
            else 
            break;
        }
        
        return ans;
    }
};