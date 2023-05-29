class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int> m;
        for(auto x : jewels){
            m[x]++;
        }
        int c = 0;
        for(auto x : stones){
            if(m.find(x)!=m.end())
                c++;
        }
        return c;
    }

};