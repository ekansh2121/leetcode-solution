class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
        int temp = x;
        int digit = 0;
        double ans = 0;
        while (temp!=0) {
            digit = temp % 10;
            ans = (ans*10) + digit;
            temp = temp/10;
        }
        cout<<"ans is"<<ans<<endl;
        if (x==ans)
        return true;
        return false;
    }
};