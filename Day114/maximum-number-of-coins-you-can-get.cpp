class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end(),greater<int>());
        int sum=0;
        int t = piles.size()/3;
        for(int i=1;i<=piles.size()-t;i+=2){
            sum+=piles[i];
        }
        return sum;
    }
};