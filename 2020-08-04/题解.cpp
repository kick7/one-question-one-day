class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> v;
        vector<int>indegree(numCourses,0);
        vector<vector<int>> graph(numCourses,v);

        for(int i=0;i<(int)prerequisites.size();i++){
            indegree[prerequisites[i][0]]++;
            graph[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        queue<int>q;
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        int cnt=0;
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            cnt++;
            for(int i=0;i<(int)graph[temp].size();i++){
                indegree[graph[temp][i]]--;
                if(indegree[graph[temp][i]]==0){
                    q.push(graph[temp][i]);
                }
            }
        }
        return cnt==numCourses;
    }
};
