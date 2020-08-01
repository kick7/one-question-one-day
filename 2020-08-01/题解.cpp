class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int k=nums.size();
        vector<pair<int,int>> p;
        for(int i=0;i<k;i++){
            for(int j=0;j<(int)nums[i].size();j++){
                p.push_back(make_pair(nums[i][j],i));
            }
        }
        sort(p.begin(),p.end());
        vector<int> result;
        map<int,int>mp;
        int i=0,j=0,cnt=0;
        for(;j<(int)p.size();j++){
            if(!mp[p[j].second]){
                cnt++;
            }
            mp[p[j].second]++;
            if(cnt==k){
                while(mp[p[i].second]>1){
                    mp[p[i].second]--;
                    i++;
                }
                if(result.empty()||result[1]-result[0]>p[j].first-p[i].first){
                    result=vector<int>{p[i].first,p[j].first};
                }
            }
        }
        return result;

    }
};
