class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        int size = digits.size()-1;
        while(carry == 1 && size>=0) {
            digits[size]++;
            if(digits[size]==10){
                carry = 1;
                digits[size]=0;
            } else {
                carry = 0;
            }
            size--;
        }
        if(carry==1) {
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};