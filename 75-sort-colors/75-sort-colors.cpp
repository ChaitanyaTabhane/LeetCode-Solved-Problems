class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0;  //low
        int m=0; // mid
        int h=nums.size()-1; //high
        
        while(m<=h){
            if(nums[m]==0){
                // swaps the numb with low whenever it is zero on mid and increment l and m
                swap(nums[l],nums[m]);
                l++;
                m++;
            }
            else if(nums[m]==1){
                // if m is on 1 it increaments
                m++;
            }
            else if(nums[m]==2){
                // if m is on 2 it swaps the number to high and decreament high
                swap(nums[m],nums[h]);
                h--;
            }
            
        }
    }
};