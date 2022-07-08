class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n= nums.size()-1;
        int inf=0;  // Infection point
        
        // find the infection point -> the point which is greater than its previous point. Ex [3 2 5 3 1] -> 5 is inf pt
        for(int i=n;i>0;i--){
            if(nums[i]>nums[i-1]){
                inf=i;
                break;
            }
        }
        
        //if inf pt is at 0th index, that means this is its last permutation ans we have to just sort the array
        if(inf==0) {
            sort(nums.begin(),nums.end());
        }
        
        else{
            int min = INT_MAX;
            // Ex [3 2 5 3 1] -> 2 is to swap
            int toswap =  nums[inf-1]; // the element which is to swap to its greater no.
            for (int j=inf; j<=n;j++){
                if(nums[j]-toswap>0 && nums[j]-toswap<min){// for finding the greater no. than it
                    
                    //swap
                    int temp=nums[j];
                    nums[j]=nums[inf-1];
                    nums[inf-1]=temp;
                }
            }

            //sort after the  the inf pt
            sort(nums.begin()+inf,nums.end());
        }
        
    }
};