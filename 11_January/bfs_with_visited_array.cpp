class Solution {
  public:
    vector<int>bfs(vector<vector<int>> &adj) {
        int n=adj.size();
        vector<int>visited(n,0);
        vector<int>result;
        queue<int>q;
        q.push(0);
        visited[0]=1;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            result.push_back(node);
            for (int neigh : adj[node]){
                if (!visited[neigh]){
                    visited[neigh]=1;
                    q.push(neigh);
                }
            }
        }
        return result;
    }
};
