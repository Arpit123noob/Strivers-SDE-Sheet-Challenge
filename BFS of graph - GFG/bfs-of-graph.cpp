//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        
        vector<int> v;
        queue<int> q;
        q.push(0);
        v.push_back(0);
        vector<bool> visited(V,false);
        visited[0] = true;
        while(!q.empty()){
            int cv = q.front();
            q.pop();
            
            for(int i=0; i<adj[cv].size(); i++){
                if(!visited[adj[cv][i]] ){
                    q.push(adj[cv][i]);
                    visited[adj[cv][i]] = true;
                    v.push_back(adj[cv][i]);
                }
            }
            
        }
        return v;
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends