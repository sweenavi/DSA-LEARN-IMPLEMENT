class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0;
        int zcnt=0;
        int mlen=0;

        for(int r=0;r<=nums.size()-1;r++)
        {
            if(nums[r]==0)
            {
                   zcnt++; 
            }
            while(zcnt>1)
            {
                if(nums[l]==0)
                {
                    zcnt--;
                }
                l++;
            }
            mlen=max(mlen, r-l+1);
        }
        return mlen-1;
    }
};