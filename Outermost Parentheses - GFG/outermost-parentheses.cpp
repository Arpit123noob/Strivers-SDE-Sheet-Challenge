//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) {
        // code here
         stack<char>st;
        string ans;
        for(auto a:s){
            if(a=='('){
                if(st.size()>0){
                    ans+='(';
                }
                st.push('(');
            }
            else{
                if(st.size()>1){
                    ans+=')';
                }
                st.pop();
            }

        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;

        cout << obj.removeOuter(s) << "\n";
    }
}
// } Driver Code Ends