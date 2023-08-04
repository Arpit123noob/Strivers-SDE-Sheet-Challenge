class Solution {
public:
    void dfs(vector<int>&path,vector<vector<int>>&graph,vector<vector<int>> &ans,int curr){
        path.push_back(curr);
        if(curr==graph.size()-1){
            ans.push_back(path);

        }
        else{
            for(auto x:graph[curr]){
                dfs(path,graph,ans,x);
            }
        }
        path.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
      vector<vector<int>>ans;
      vector<int>path;
      dfs(path,graph,ans,0);




      return ans;
         





    }
};