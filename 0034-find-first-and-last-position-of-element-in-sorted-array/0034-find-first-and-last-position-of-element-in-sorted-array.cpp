class Solution {
public:
    int binarysearch1(int start,int end,vector<int>&nums,int target){
        int res=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(target==nums[mid]){
                res=mid;
                end=mid-1;
            }
            else if(target<nums[mid])
                end=mid-1;
            else
                start=mid+1;
        }
        return res;
}
    int binarysearch2(int start,int end,vector<int>&nums,int target){
        int res=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(target==nums[mid]){
                res=mid;
                start=mid+1;
            }
            else if(target<nums[mid])
                end=mid-1;
            else
                start=mid+1;
        }
        return res;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0,end=n-1;
        int f=binarysearch1(start,end,nums,target);
        int s=binarysearch2(start,end,nums,target);
        return {f,s};
    }
};