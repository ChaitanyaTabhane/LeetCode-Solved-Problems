class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size(), n = matrix[0].size();
    bool row_has_zero = false, col_has_zero = false;
    
    // Check if first row has a zero
    for (int j = 0; j < n; j++) {
        if (matrix[0][j] == 0) {
            row_has_zero = true;
            break;
        }
    }
    
    // Check if first column has a zero
    for (int i = 0; i < m; i++) {
        if (matrix[i][0] == 0) {
            col_has_zero = true;
            break;
        }
    }
    
    // Check for zeros in the rest of the matrix
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = matrix[0][j] = 0;
            }
        }
    }
    
    // Nullify rows based on values in first column
    for (int i = 1; i < m; i++) {
        if (matrix[i][0] == 0) {
            for (int j = 1; j < n; j++) {
                matrix[i][j] = 0;
            }
        }
    }
    
    // Nullify columns based on values in first row
    for (int j = 1; j < n; j++) {
        if (matrix[0][j] == 0) {
            for (int i = 1; i < m; i++) {
                matrix[i][j] = 0;
            }
        }
    }
    
    // Nullify first row
    if (row_has_zero) {
        for (int j = 0; j < n; j++) {
            matrix[0][j] = 0;
        }
    }
    
    // Nullify first column
    if (col_has_zero) {
        for (int i = 0; i < m; i++) {
            matrix[i][0] = 0;
        }
    }
}
};