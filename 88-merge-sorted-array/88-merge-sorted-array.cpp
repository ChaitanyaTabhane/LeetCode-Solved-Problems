class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
//         //for edge case i.e. if the nums1 is empty then just append the elements of another array
//         if(m==0){
//              for(int i=0; i<n;i++){
//                  nums1[i]=nums2[i]+nums1[i];
//              }
//         }
         
//         //if the second array is having elements
//         else if(n!=0){
//             for(int i=0; i<n;i++){
//                 // add the elements to the zeros of nums1
//                 nums1[i+m]=nums2[i]+nums1[i+m];
//              }
//             //sort the array
//              sort(nums1.begin(),nums1.end());
//          }
        // complexity is O(nlogn)
        
        int p1=m-1, p2 =n-1, i=m+n-1;
        while(p2>=0){
            if(p1 >= 0 && nums1[p1]>nums2[p2]){
                nums1[i--] = nums1[p1--];
            }
            else{
                nums1[i--] = nums2[p2--];
            }
        }
    }
};