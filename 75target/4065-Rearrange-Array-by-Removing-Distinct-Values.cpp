class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int, int> freq;

        for(int x: nums){ freq[x]++;}

        vector<int>ans;
        while(!freq.empty())
        {
            vector<int>rem;

            for(auto &[val,cnt]: freq)
                {
                    ans.push_back(val);
                    cnt--;

                    if(cnt==0)
                    {
                        rem.push_back(val);
                    }
                }

            for(int val:rem){
                freq.erase(val);
            }
        }
        return ans;
    }
};