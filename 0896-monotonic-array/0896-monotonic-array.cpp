class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n-1 && nums[i]<=nums[i+1])i++;
        if(i==n-1)return 1;
        i=0;
        while(i<n-1 && nums[i]>=nums[i+1])i++;
        if(i==n-1)return 1;
        return 0;
    }
};