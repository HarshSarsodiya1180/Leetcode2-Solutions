class Solution {
public:
   
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
       if(n==0)return 0;
        int maxp=nums[0];
        int minp=nums[0];
        int res=maxp;
        for(int i=1;i<n;i++){
            if(nums[i]<0)swap(maxp,minp);
            maxp=max(nums[i],maxp*nums[i]);
            minp=min(nums[i],minp*nums[i]);
            res=max(res,maxp);
        }
     return res;
    }
};
    