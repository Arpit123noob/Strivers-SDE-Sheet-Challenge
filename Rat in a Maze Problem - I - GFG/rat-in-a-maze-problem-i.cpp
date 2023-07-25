//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void helper(int i,int j, int n,vector<vector<int>> &m,string &path,vector<string>&ans){
        if(i<0||j<0||i==n||j==n||m[i][j]==0)
            return;
        else if(i==n-1&&j==n-1)
            ans.push_back(path);
    
    else{
        //DOWN
        
        m[i][j]=0;
        path.push_back('D');
        helper(i+1,j,n,m,path,ans);
        path.pop_back();
        
        
        //LEFT
                path.push_back('L');
        helper(i,j-1,n,m,path,ans);
        path.pop_back();
        
        
        
        //RIGHT
                path.push_back('R');
        helper(i,j+1,n,m,path,ans);
        path.pop_back();
        
        
        //UP
        
                path.push_back('U');
        helper(i-1,j,n,m,path,ans);
        path.pop_back();
        
        
        m[i][j]=1;
        
    }
    
}
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        string path;
        
        helper(0,0,n,m,path,ans);
        
        return ans;
        
        
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends