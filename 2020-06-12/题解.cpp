class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //这里的重复判断只能通过手动的方法进行，使用map或则set的方法进行判断，或超时，这里会卡时间
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int len=nums.size();
        for(int i=0;i<len;i++){
            if(nums[i]>0)
                break;
            if(i>0&&nums[i]==nums[i-1]){ //判断重复
                continue;
            }           
            int L=i+1,R=len-1; //设置双指针，进行搜索
            while(L<R){
                int sum=nums[i]+nums[L]+nums[R];
                if(sum==0){
                    vector<int>tmp;
                    tmp.push_back(nums[i]);
                    tmp.push_back(nums[L]);
                    tmp.push_back(nums[R]);
                    ans.push_back(tmp);
                    while(L<R&&nums[L]==nums[L+1]){ //判断重复
                        L+=1;
                    }
                    while(L<R&&nums[R]==nums[R-1]){ //判断重复
                        R-=1;
                    }
                }
                if(sum>0){
                    R-=1;
                }else{
                    L+=1;
                }
            }
        }
        return ans;
        
    }
};