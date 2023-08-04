//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public:

    int helper(int i,string A,set<string>&B){
        if(i==A.size())
            return 1;
        string temp;
        for(int j=i;j<A.size();j++){
            temp+=A[j];
            if(B.find(temp)!=B.end()){
                if(helper(j+1,A,B))
                    return 1;
            }
        }
        return 0;
    }

    int wordBreak(string A, vector<string> &B) {
         set<string>st;
        for(auto x:B)st.insert(x);
        return helper(0,A,st);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}

// } Driver Code Ends