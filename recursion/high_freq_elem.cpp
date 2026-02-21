#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
    public:
    int mostfreqelem(vector<int>& nums)
    {
        vector<bool> visited(nums.size(), false);

        for(int i=0; i<nums.size(); i++)
        {
            if(visited[i]) continue;
            int count = 1;
            for(int j=i+1; j<nums.size(); j++)
            {
                if(nums[i] == nums[j])
                {
                    visited[j] = true;
                    count++;
                }
            }
            if(count > nums.size()/2) return nums[i];
        }
    }

};

int main()
{
    Solution s;
    vector<int> nums = {2,2,1,1,1,2,2};
    cout << s.mostfreqelem(nums) << endl;
    return 0;
}