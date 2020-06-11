class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        vector<int> ans(T.size(),0); 
        stack<int> str; //维护单调栈
        for(int i=0;i<T.size();i++){
            //记录气温位置，维护栈中的满足条件的最大气温
            while(!str.empty()&&(T[i]>T[str.top()])){
                ans[str.top()]=i-str.top();
                str.pop();
            }
            str.push(i);
        }
        return ans;
    }
};