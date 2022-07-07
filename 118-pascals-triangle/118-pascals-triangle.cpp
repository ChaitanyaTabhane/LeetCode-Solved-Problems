class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows);
        if (numRows==0) return {}; // checking if numRows is zero
        res[0]={1}; // Initializing the first element
        for(int i= 1 ; i<numRows ; i++){
            res[i].resize(i+1); // Increasing the size of the vector by one as one element in the row is increasing
            res[i][0]=res[i][i]=1; // setting the first and last element as 1
            for(int j=1; j<i; j++){ 
                res[i][j]=res[i-1][j-1] + res[i-1][j]; // adding the 2 elements
            }
        }
        return res;
    }
};