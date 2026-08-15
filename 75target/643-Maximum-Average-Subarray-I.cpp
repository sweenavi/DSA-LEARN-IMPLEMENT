class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        int maxs=0;
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
            
        }
        maxs=sum;

        for(int i=k;i<nums.size();i++)
        {
            sum+=nums[i];
            sum-=nums[i-k];

            maxs=max(maxs,sum);
        }
        return (double)maxs/k;
    }
};