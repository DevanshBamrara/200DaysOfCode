class Solution {
public:
    bool judgeCircle(string moves) {
        vector<int> v = {0,0};
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='U')
                ++v[1];
            if(moves[i]=='D')
                --v[1];
            if(moves[i]=='L')
                --v[0];
            if(moves[i]=='R')
                ++v[0];
        }
        if(v[0]==0 && v[1]==0)
            return true;
        return false;
    }
};