class Solution {
public:
    int mySqrt(int x) {
        if(x==0) {
            return 0;
        }
        int ans = 1;
        while((ans*ans)<=x){
            ans++;
            if(ans>INT_MAX/ans)
            break;
        }
        return --ans;
    }
};