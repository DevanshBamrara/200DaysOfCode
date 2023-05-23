class Solution {
public:
    int maxDepth(string s) {
        int maxi = 0;
        int d = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i]=='(')
                d+=1;
            else if(s[i]==')')
                d-=1;
            maxi=max(maxi,d);
        }
        return maxi;
    }
};