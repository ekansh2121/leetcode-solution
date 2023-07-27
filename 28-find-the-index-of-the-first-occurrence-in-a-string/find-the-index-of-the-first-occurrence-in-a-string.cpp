class Solution {
public:
    int strStr(string haystack, string needle) {
        int hLen = haystack.length();
        int nLen = needle.length();
        for(int i = 0; i<hLen; i++){
            if(needle[0]==haystack[i]){
                int check = 0;
                bool flag = true;
                while(check<nLen && flag){
                    if(needle[check]!=haystack[check+i]){
                        flag = false;
                    }
                    check++;
                }
                if(flag){
                    return i;
                }
            }
        }
        return -1;
    }
};