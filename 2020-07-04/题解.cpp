class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>str;
        str.push(-1);
        size_t len=s.size();
        int ans=0;
        for(size_t i=0;i<len;i++){
            if(s[i]=='('){
                str.push(i);
            }else{
                str.pop();
                if(str.empty()){
                    str.push(i);
                }else{
                    ans=(ans>i-str.top()?ans:i-str.top());
                }
            }
        }
        return ans;
    }
};