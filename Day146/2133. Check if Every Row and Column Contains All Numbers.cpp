class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int size = matrix.size();
        for(int i=0;i<matrix.size();i++){
            set<int> s1;
            for(int j=0;j<matrix[i].size();j++){
                if(1 <= matrix[i][j] && matrix[i][j] <= size)
                   s1.insert(matrix[i][j]);
                else
                    return false;
            }
            if(s1.size() != size)
                return false;
        }

        for(int i=0;i<matrix.size();i++){
            set<int> s1;
            for(int j=0;j<matrix[i].size();j++){
                if(1 <= matrix[i][j] && matrix[i][j] <= size)
                   s1.insert(matrix[j][i]);
                else
                    return false;
            }
            if(s1.size() != size)
                return false;
        }
        return true;
    }
};