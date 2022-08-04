class Solution {
public:
    string longestPalindrome(string s) {
        string ans;
        int a=0;

        for(int i=0;i<s.size();i++){   

        //Below loop checking odd palindrom like ABA, BACAB
        //First Start L and R from B(see above) and check its adjcent element by equal (s[l]==s[r])
        //the size of form string is (r-l+1) if its max the store in a

            int l=i,r=i;
            while(l>=0 && r<s.size() && s[l]==s[r]){
                if(a<(r-l+1)){
                    ans=s.substr(l,r+1-l);
                    a=r-l+1; 
                }
                l--;r++;
            }

            //This is same code but here we check even palindrome like ABBA
            //Here we start l and r with one index up
            //Remainng code is similar to above

            l=i,r=i+1;
            while(l>=0 && r<s.size() && s[l]==s[r]){
                if(a<(r-l+1)){
                    cout<<l<<r<<endl;
                    ans=s.substr(l,r+1-l);
                    a=r-l+1; 
                }
                l--;r++;
            }
        }
        return ans;
    }
};