class Solution {
public:
    string reverseWords(string s) {
        vector<string> str;
        int i=0;
        string ans;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                reverse(ans.begin(),ans.end());
                str.push_back(ans);
                ans.clear();
            }
            else 
            ans+=s[i];
        }
        reverse(ans.begin(),ans.end());
        str.push_back(ans);
        string answer;
        for(int i = 0; i<str.size();i++)
            if(i==str.size()-1)
            answer = answer + str[i];
            else
            answer = answer + str[i] +" ";
        return answer;
    }
};