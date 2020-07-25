class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        long left=nums[0],right=0;
        for(size_t i=0;i<nums.size();i++){
            left=(left>nums[i]?left:nums[i]);
            right+=nums[i];
        }
        int cnt=1;
        long mid=0,sum=0;
        while(left<right){
            cnt=1;
            sum=0;
            mid=(left+right)/2;
            for(size_t i=0;i<nums.size();i++){
                sum+=nums[i];
                if(sum>mid){
                    sum=nums[i];
                    cnt++;
                }
            }
            if(cnt>m){
                left=mid+1;
            }else{
                right=mid;
            }

        }
        return left;
    }
};