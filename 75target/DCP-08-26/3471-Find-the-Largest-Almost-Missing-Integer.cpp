class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        
        for(int l=0;l<=nums.size()-k;l++)
        {
            set<int> cur;
        for(int i=l;i<l+k;i++)
        {
            cur.insert(nums[i]);
        }

        for(int m:cur)
        {
            mp[m]++;
        }
        
          
        }
         int ans = -1;

        // Find largest element appearing in exactly one window
        for (auto &[x, count] : mp) {
            if (count == 1) {
                ans = max(ans, x);
            }
        }

        return ans;
    }
};