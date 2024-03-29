class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        reverse(matrix.begin(), matrix.end()); //reversing the matrix
        for (int i = 0; i<matrix.size(); i++){
            for (int j = i; j<matrix[i].size(); j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};
