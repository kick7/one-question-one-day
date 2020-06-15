class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        const int maxn = 1e9+10;
        string str="";
        int len=maxn;
        for(int i=0;i<strs.size();i++){
            len=(len>(int)strs[i].size()?strs[i].size():len);
        }
        if(len==0||len==maxn){ //这里会卡一个空字符的情况
            return str;
        }
        map<int,char>mp;
        for(int j=0;j<len;j++){
            mp[j]=strs[0][j];
            for(int i=1;i<(int)strs.size();i++){
                if(strs[i][j]!=mp[j]){
                    return str;
                }
            }
            str+=strs[0][j];
        }
        return str;
    }
};