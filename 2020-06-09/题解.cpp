class Solution {
public:
    int translateNum(int num) {
        string str=to_string(num);
        int dp[100];
        dp[0]=dp[1]=1;
        
        for(int i=1;i<str.size();i++){
            dp[i+1]=dp[i];
            int num=(str[i-1]-'0')*10+(str[i]-'0');
            if(num>=10&&num<=25){
                dp[i+1]+=dp[i-1];
            }
        }
        return dp[str.size()];
    }
    //dp[i]:当位置为i的时候，能够满足条件的组合数
    //dp[i]=dp[i-1]:当为单个的时候，那么满足的条件的数量即使dp[i-1]
    //判断一下 num[i-1]+num[i]是否是[10.25]，如果可以，就再加上dp[i-2]
    //dp[i]的两种转移状态:dp[i-1](单个),dp[i-2](满足10-25)
};