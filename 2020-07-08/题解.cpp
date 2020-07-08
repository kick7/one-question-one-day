class Solution {
public:
    vector<int> divingBoard(int shorter, int longer, int k) {
         set<int>str;
         for(int i=0;i<=k&&k!=0;i++){
             int j=k-i;
             str.insert(shorter*i+longer*j);
         }
         return vector<int>(str.begin(),str.end());
    }
};