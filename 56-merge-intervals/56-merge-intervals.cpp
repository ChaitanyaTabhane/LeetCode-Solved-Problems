class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> ans;
        
        //checking if the vector is empty
        if(intervals.size() == 0) {
            return ans; 
        }
        //sorting the vector
        sort(intervals.begin(), intervals.end());
        vector<int> temp = intervals[0]; 
        
    
        for(auto it : intervals) {
            // checking if the 2nd element of the first pair is less than the 1st element in the second row 
            if(it[0] <= temp[1]) {
                temp[1] = max(it[1], temp[1]);// replacing the element to maximum 
            } else {
                ans.push_back(temp); 
                temp = it; 
            }
            //cout<<temp[0]<<" "<<temp[1]<<endl;
        }
        
        ans.push_back(temp);
        return ans; 
    }
};