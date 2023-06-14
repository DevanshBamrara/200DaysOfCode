class Solution {
public:
    int balancedStringSplit(string s) {
        int r = 0, l = 0, c = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'R')
                r++;
            if(s[i] == 'L')
                l++;
            if(r==l && r!=0){
                c++;
                r=0;
                l=0;
            }
        }       
        return c;
    }
};