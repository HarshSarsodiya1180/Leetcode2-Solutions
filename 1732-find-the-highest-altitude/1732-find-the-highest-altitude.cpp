class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>v(n+1);
        int sum=0;
        for(int i=0;i<n;i++){
            int x=gain[i]+sum;
            v.push_back(sum);
            v.push_back(x);
            sum=x;
        }
        int max=INT_MIN;
        for(int i=0;i<v.size();i++){
            if(v[i]>max)
                max=v[i];
            }
        return max;
        }
};