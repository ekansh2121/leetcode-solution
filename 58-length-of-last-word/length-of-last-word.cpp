class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.length()-1;
        while(s[size]==' ' && size > 0){
            size--;
        }
        int count = 0;
        while(s[size]!=' ' && size > 0){
            count++;
            size--;
        }
        if(size == 0 && s[size] != ' ') count ++;
        return count;
    }
};