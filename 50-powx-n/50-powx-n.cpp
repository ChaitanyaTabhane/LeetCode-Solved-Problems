class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        long long nn = n;
        
        if(nn<0) nn = -1 * nn;
        
        while(nn){ // whenever n is greater than 0
            if (nn%2) {// while nn is odd
                ans = ans*x;
                nn = nn - 1; 
            }
            else {//while nn is even 
                x = x * x;
                nn = nn/2;
            }
        }
        if(n<0){
                ans = (double) (1) / (double) (ans);
            }
        return ans;
    }
};