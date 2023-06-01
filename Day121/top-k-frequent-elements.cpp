class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        for(auto x : nums){
            m[x]+=1;
        }
        priority_queue<pair<int,int>> pq;
        vector<int> ans;
        for(auto x : m){
            pq.push(make_pair(x.second, x.first));
        }
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};