class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        int count = 32;
        int bit;
        while(count>0){
            bit=n&1;
            ans=ans<<1 | bit;
            cout<<" bit is "<<bit<<endl;
            cout<<" ans is "<<ans<<endl;
            n=n>>1;
            count--;
        }
        return ans;
    }
};