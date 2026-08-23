class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());

        int l=0;
        int r=nums.size()-1;
        int sum=0;
        int cnt=0;
        while(l<r)
        {
            if(nums[r]>k){
                r--;
            }
            else{
                sum=nums[l]+nums[r];
                if(sum==k)
                {
                    cnt++;
                    l++;
                    r--;
                }
                else if(sum<k)
                {
                    l++;
                }
                else{ r--;}
                
            }
        }
        return cnt;
    }
};