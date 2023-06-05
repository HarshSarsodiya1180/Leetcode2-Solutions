class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>nums;
        int x=0;
        for(int i=0;i<n;i++){
            int t=start+2*i;
            nums.push_back(t);
        }
        for(int i=0;i<nums.size();i++){
            x=nums[i]^x;
        }
        return x;
    }
};