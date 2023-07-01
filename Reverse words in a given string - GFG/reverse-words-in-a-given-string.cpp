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
        string ans="", temp="";
        int i=0;
        while(i<S.length()){
            if(S[i]=='.'){
                ans='.'+ temp + ans;
                temp="";
            }
            else temp+=S[i];
            
            i++;
        }
        ans=temp+ans;
        
        return ans;
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