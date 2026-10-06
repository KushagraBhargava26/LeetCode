class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int columns = matrix[0].size();

        vector<bool> row_marker(rows,false);
        vector<bool> column_marker(columns,false);

        for(int i = 0; i< rows;i++){
            for(int j = 0; j< columns;j++){
                if(matrix[i][j] == 0 ){
                    row_marker[i] = true;
                    column_marker[j] = true;
                }
            }
        }
        for(int i = 0; i< rows;i++){
            for(int j = 0; j< columns;j++){
                if(row_marker[i] || column_marker[j]){
                    matrix[i][j] = 0;
                }
            }
        }
       
        
    }
};