//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        stack<char> st;
        for(int i =0;i<s.size();i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else if((st.top() == '(' && s[i] == ')' )||
            (st.top() == '[' && s[i] == ']' )|| 
            (st.top() == '{' && s[i] == '}' ))
            {
                st.pop();
            }
            else
            st.push(s[i]);
        }
        if(st.empty()) return true;
        else return false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends