class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         bool present= false;
//         int n= matrix.size();
//         int m= matrix[0].size();
        
//         for(int i=0; i<n; i++){
//             for (int j=0; j<m;j++){
//                 if(matrix[i][j]== target){
//                     present = 1;
//                     break;
//                 }
//             }
//         }
//         return present;
        
        int m= matrix.size(), n= matrix[0].size();
        int lo = 0;
        int hi= m*n-1;
        
        while(lo<=hi){
            int mid = (lo+(hi - lo)/2);
            if(matrix[mid/n][mid%n]== target) {return true;}
            
            if(matrix[mid/n][mid%n]< target) {lo = mid+1;}
            
            else {hi= mid-1;}
        }
        
        return false; 
    }
};