class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cn = nums[0];
        int cc = 1;
        int j = 1;
        for(int i = 1; i<nums.size(); i++) {
            if(nums[i]==cn && cc<2) {
                nums[j++]=nums[i];
                cc++;
            }
            if(nums[i]!=cn) {
                nums[j++]=nums[i];
                cc=1;
                cn=nums[i];
            }
        }
        return j;
    }
};