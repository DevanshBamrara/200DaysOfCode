class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> ind;
        vector<int> ans;
        for(int i=0;i<s.size();i++){
            if(s[i]==c){
                ind.push_back(i);
            }
        }
        for(int i=0;i<s.size();i++){
            int minx = INT_MAX;
            for(int j=0;j<ind.size();j++){
                minx=min(minx,abs(i-ind[j]));
            }
            ans.push_back(minx);
        }
        return ans;
    }
};