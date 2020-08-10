
class Solution {
public:
    int countBinarySubstrings(string s) {
        int index=0,len=(int)s.size();
        int count=0;
        vector<int>ans;
        while(index<len){
            char str=s[index];
            count=0;
            while(index<len && str==s[index]){
                index++;
                count++;
            }
            ans.push_back(count);
        }
        int result=0;
        for(int i=1;i<(int)ans.size();i++){
            result+=min(ans[i],ans[i-1]);
        }
        return result;
    }
};
