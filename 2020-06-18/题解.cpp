class Solution {
public:
    int minSwap(vector<int>& A, vector<int>& B) {
        int len=A.size();
        int dp[len][2]; //到达第i位的时候，换或者不换的最小次数
        dp[0][0]=0; 
        dp[0][1]=1;
        for(int i=1;i<len;i++){
            if(A[i-1]<A[i]&&B[i-1]<B[i]){ //有序
                if(A[i-1]<B[i]&&B[i-1]<A[i]){ //可以交叉
                    dp[i][0]=min(dp[i-1][0],dp[i-1][1]);
                    dp[i][1]=min(dp[i-1][0],dp[i-1][1])+1;
                }else{ //不能交叉
                    dp[i][0]=dp[i-1][0];
                    dp[i][1]=dp[i-1][1]+1;
                }
            }else{ //无序，必须替换，因为，题目保证，所以，一定是交叉
                dp[i][0]=dp[i-1][1];
                dp[i][1]=dp[i-1][0]+1;
            }
        }
        return min(dp[len-1][0],dp[len-1][1]);
    }
};