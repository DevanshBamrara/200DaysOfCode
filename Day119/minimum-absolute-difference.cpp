class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int> > v;
        int mini = 0,mn=INT_MAX;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i++){
            mini=abs(arr[i]-arr[i+1]);
            mn=min(mn,mini);
            }
        cout<<mn;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(abs(arr[i]-arr[i+1])==mn)
                v.push_back({arr[i],arr[i+1]});
        }
        return v;
    }
};