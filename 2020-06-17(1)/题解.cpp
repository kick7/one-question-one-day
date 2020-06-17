class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& A) {
        /*
        分析：一般而而言，暴力就是o^2，超时
        那么公式分析：得分为A[i]+i+A[j]-j，那么，当位置为j的时候，A[j]-j是个固定值
        那么其实求公示的MAX，就是相当于求在[0,j-1]的范围内，A[i]+i的一个max
        */
        int ans=0,mx=A[0]+0;
        for(int i=1;i<A.size();i++){
            ans=max(ans,mx+A[i]-i);
            mx=max(mx,A[i]+i);
        }
        return ans;
    }
};