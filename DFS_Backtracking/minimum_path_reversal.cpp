// class Solution {
// public:
//   const int INF = 1e9 ;
//     int minCost(int n, vector<vector<int>>& edges) {
//       vector<vector<pair<int,int>>> adj(n) ;
//       for (const vector<int> &e : edges) {
//         int u = e[0], v = e[1], w = e[2] ;
//         adj[u].push_back({v,1LL*w}) ;
//         adj[v].push_back({u,1LL*(w << 1)}) ; // Reverse edge with double cost 
//       }
//       vector<int> d(n,INF) ;
//       using T = pair<int,int> ; 
//       priority_queue<T, vector<T>,greater<T>> pq ;
//       pq.push({0,0}) ;
//       d[0] = 0 ;
//       while (!pq.empty()) {
//         auto [dis,u] = pq.top() ;
//         pq.pop() ;
//         if (dis != d[u]) continue ;
//         if (u == n - 1) return dis ;
//         for (auto &[v,w] : adj[u]) {
//           if (dis + w < d[v]) {
//             d[v] = dis + w ;
//             pq.push({d[v],v}) ;
//           }
//         }
//       }
//       return -1 ; 
//     }
// };

class Solution {
public:
    int minCost(int n, vector<vector<int>>& edges) {
        vector<vector<pair<int,int>>>g(n),in(n);
        for (auto &e : edges){
            g[e[0]].push_back({e[1], e[2]});
            in[e[1]].push_back({e[0], e[2]});
        }
        vector<long long> dist(n, LLONG_MAX);
        priority_queue<pair<long long,int>, vector<pair<long long,int>>,greater<>>pq;
        dist[0]=0;
        pq.push({0,0});
        while (!pq.empty()) {
            auto [c,u]=pq.top();
            pq.pop();
            if(c>dist[u]) continue;
            for(auto &[v,w]:g[u])
                if(dist[v]>c+w){
                    dist[v]=c+w;
                    pq.push({dist[v],v});
                }
            // reverse 
            for(auto &[v,w]:in[u])
                if(dist[v]>c+2LL*w){
                    dist[v]=c+2LL*w;
                    pq.push({dist[v],v});
                }
        }
        return dist[n-1]==LLONG_MAX?-1:dist[n-1];
    }
};

