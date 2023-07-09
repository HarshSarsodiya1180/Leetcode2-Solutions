//{ Driver Code Starts
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int transform (string A, string B)
    {
        int n=A.length();
        int m=B.length();
        if(n!=m)return -1;
        int count[256]={0};
        for(int i=0;i<n;i++){
            count[A[i]]++;
            count[B[i]]--;
        }
        for(int i=0;i<256;i++){
            if(count[i]!=0)return -1;
        }
        int i=n-1,j=m-1,ans=0;
        while(i>=0 ){
            if(A[i]==B[j]){
                i--;
                j--;}
            else{
            ans++;
            i--;}
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution ob;
        cout <<ob.transform (A, B) << endl;
    }
}
// } Driver Code Ends