//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here
        stack<string>st;
            string s2;
            for(int i=0;i<S.size();i++){
            while(i<S.size()&&S[i]!='.'){
                s2.push_back(S[i]);
                i++;
            }
            st.push(s2);
            s2="";
            }
            string s3;
        
        while(!st.empty()){
            s3=s3+st.top();
            
            s3=s3+'.';
            st.pop();
        }
        if (!s3.empty() && s3.back() == '.') {
            s3.pop_back();
        }
        return s3;    
    
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends