class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int len=nums.size();
        int pre[len+10];
        pre[0]=0;
        for(int i=1;i<=len;i++){
            pre[i]=pre[i-1]+nums[i-1];
        }
        for(int i=1;i<=len;i++){ //长度
            for(int j=0;j+i<=len;j++){
                int sum=pre[j+i]-pre[j];
                if(sum>=s){
                    return i;
                }
            } 
        }             
    return 0;
    }
};