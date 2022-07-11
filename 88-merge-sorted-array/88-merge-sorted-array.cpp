class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m==0){
             for(int i=0; i<n;i++){nums1[i]=nums2[i]+nums1[i];}
        }
        
         else if(n!=0){
             for(int i=0; i<n;i++){
                nums1[i+m]=nums2[i]+nums1[i+m];
                 cout<<nums1[i]<<" ";
             }
             sort(nums1.begin(),nums1.end());
         }        
    }
};