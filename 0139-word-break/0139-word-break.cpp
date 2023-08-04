class Solution {
public:
    int dp[301];

    int helper(int i,string s,set<string>&wordDict){
       


        if(i==s.size())
            return 1;
        if(dp[i]!=-1)
            return dp[i];
        string temp;
        for(int j=i;j<s.size();j++){
            temp+=s[j];
            if(wordDict.find(temp)!=wordDict.end()){
                if(helper(j+1,s,wordDict))
                    return dp[i]= 1;
            }
        }
        return dp[i]=0;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        memset(dp,-1,sizeof(dp));
        set<string>st;
        for(auto x:wordDict)st.insert(x);
        return helper(0,s,st);
    }
};
