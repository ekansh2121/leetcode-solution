class Solution {
public:
    bool isValid(string s) {
        int j = s.length();
        stack<char> stack; 
        char x;
        int i = 0;
        while(j>i){
            if(s[i]=='}'){
                if(stack.empty())
                return false;
                x=stack.top();
                if(x!='{'){
                    return false;
                }
                stack.pop();
            } else
            if(s[i]==']'){
                if(stack.empty())
                return false;
                x=stack.top();
                if(x!='['){
                    return false;
                }
                 stack.pop();
            } else
            if(s[i]==')'){
                if(stack.empty())
                return false;
                x=stack.top();
                if(x!='('){
                    return false;
                }
                 stack.pop();
            } else {
                stack.push(s[i]);
            }
            i++;
            // if(stack.empty()){
            //     return fale
            // }
        }
        if(stack.empty())
        return true;
        return false;
    }
};