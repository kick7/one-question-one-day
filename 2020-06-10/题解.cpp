class Solution {
public:
    bool isPalindrome(int x) {
        string str=to_string(x);
        int pos1=0;
        int pos2=str.size()-1;
        for(;pos1<=pos2;pos1++,pos2--){
            if(str[pos1]!=str[pos2]){
                return false;
            }
        }
        return true;
    }
};