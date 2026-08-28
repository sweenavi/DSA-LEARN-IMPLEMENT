class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        unordered_set<int> s;
        for(auto x:mp)
        {
            int f=x.second;
            if(s.count(f))
            {
                return false;
            }
            s.insert(f);
        }
        return true;
    }
};