class Solution {
public:
    int reverse(int x) {
        int a=0;
        
        while(x!=0){
            if(a>214748364||a<-214748364)
                return 0;
            a*=10;
            a+=x%10;
            x/=10;
        }
        return a;
    }
};