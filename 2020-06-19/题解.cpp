class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.size();i++){
            if(!(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z'||s[i]>='0'&&s[i]<='9')){
                continue;
            }
            if(s[i]>='A'&&s[i]<='Z'){
                s[i]+=32;
            }
            str+=s[i];
        }
        for(int i=0,j=str.size()-1;i<=j;i++,j--){
            if(str[i]!=str[j]){
                return false;
            }
        }
        return true;
    }
};