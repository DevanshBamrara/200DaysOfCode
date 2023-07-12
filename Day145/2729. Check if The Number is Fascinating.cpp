class Solution {
public:
    bool isFascinating(int n) {
        string s1 = to_string(n), s2 = to_string(n*2), s3 = to_string(n*3);
        string con = s1+s2+s3;
        long long num = stol(con);
        map<int,int> map;
        map[1] = 0;
        map[2] = 0;
        map[3] = 0;
        map[4] = 0;
        map[5] = 0;
        map[6] = 0;
        map[7] = 0;
        map[8] = 0;
        map[9] = 0;
       while(num!=0){
            int temp = num%10;
            map[temp]++;
            num/=10;
        }
        for(int i = 1;i<=9;i++){
            if(map[i]==0 || map[i]>1){
                return false;
            }
        }
        return true;
    }
};