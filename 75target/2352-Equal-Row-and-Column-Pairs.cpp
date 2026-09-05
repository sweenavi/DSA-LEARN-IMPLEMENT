class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>, int> mp;
        for(int i=0;i<grid.size();i++)
        {
            mp[grid[i]]++;
        }
        int ans=0;
        for(int j=0;j<grid.size();j++){
            vector<int> c;
            for(int i=0;i<grid.size();i++)
            {
                c.push_back(grid[i][j]);
            }
            if(mp.find(c)!=mp.end()){
                ans+=mp[c];
            }
        }
        return ans;
    }
};