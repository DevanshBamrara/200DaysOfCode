class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        vector<int> travSum = {0};
        int sum = 0;
        for(int i=0;i<travel.size();i++){
            sum += travel[i];
            travSum.push_back(sum);
        }
        int g=0,p=0,m=0;
        int g1=0,p1=0,m1=0;
        travel.insert(travel.begin(), 0);
        for(int i=0;i<garbage.size();i++){
            string s = garbage[i];
            for(int j=0;j<s.size();j++){
                // G
                if(s[j]=='G'){ 
                    g++;
                    g1=i;
                }
                // P
                if(s[j]=='P'){
                    p++;
                    p1=i;
                }
                // M
                if(s[j]=='M'){
                    m++;
                    m1=i;
                }
            }
        }
        g+=travSum[g1];
        p+=travSum[p1];
        m+=travSum[m1];
        return g+p+m;
    }
};