class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        for(int j=0;j<intervals.size();j++){
            int t1 = intervals[j][0];
            int t2 = intervals[j][1];
            intervals[j][0] = -1;
            intervals[j][1] = -1;
        for(int i=j;i<intervals.size();i++){
            if((intervals[i][0]>=t1 && intervals[i][0]<=t2) && (intervals[i][0]!=-1 && intervals[i][1]!=-1)){
                t2 = max(intervals[i][1],t2);
                intervals[i][0] = -1;
                intervals[i][1] = -1;
            }
            else if((intervals[i][0]<=t1 && intervals[i][1]>=t1) && (intervals[i][0]!=-1 && intervals[i][1]!=-1)){         cout<<"Seclastride";
                t1 = min(intervals[i][0],t1);
                t2 = max(intervals[i][1],t2);
                intervals[i][0] = -1;
                intervals[i][1] = -1;
            }
        }
        if(t1!= -1 && t2!= -1)
        ans.push_back({t1,t2});
    }
    return ans;
    }
};