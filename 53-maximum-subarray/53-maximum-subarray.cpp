class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int max= INT_MIN, cur =0;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         cur=cur+nums[j];
        //         if(max<cur) max=cur;
        //     }
        //     cur=0;
        // }
        // return max;
        
        int curSum=0, maxSum=INT_MIN;
        int n=nums.size();
        for (int i=0 ;i<n; i++){
            curSum=nums[i]+curSum;
            if(curSum>maxSum) maxSum=curSum; // replace maxSum with curSim if it is less than the curr sum
            if(curSum < 0) curSum=0; // If sum gets less than 0 i.e. negative forget that part
        }
     return maxSum;
    }
};