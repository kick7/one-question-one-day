class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int len1=triangle.size();
        int len2=0;
        for(int i=0;i<len1;i++){
            len2=(len2>triangle[i].size()?len2:triangle[i].size());
        }
        int dp[len1][len2];
        for(int i=0;i<len2;i++){
            dp[len1-1][i]=triangle[len1-1][i];
        }
        for(int i=len1-2;i>=0;i--){
            for(int j=0;j<triangle[i].size();j++){
                dp[i][j]=min(dp[i+1][j],dp[i+1][j+1])+triangle[i][j];
            }
        }
        return dp[0][0];
    }
};