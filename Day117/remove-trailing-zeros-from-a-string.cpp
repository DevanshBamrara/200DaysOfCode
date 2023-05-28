class Solution {
public:
    string removeTrailingZeros(string num) {
        int c = 0, indx = -1;
        int l = num.size()-1;
        for(int i=l;i>=0;--i){
            if(num[i]=='0'){
                c=1;
                indx=i;
            }
            else{
                break;
            } 
        }
        if(c==1){
            num.erase(indx, l);
        }
        return num;
    }
};