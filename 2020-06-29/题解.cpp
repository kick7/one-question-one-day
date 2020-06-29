class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> q;
        int len=nums.size();
        for(auto num:nums){
            q.push(num);
            if(q.size()>k){
                q.pop();
            }
        }
        int ans=q.top();
        return ans;
    }
};