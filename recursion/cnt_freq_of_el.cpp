#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        unordered_map<int,int> freq;
        for (int v : nums) freq[v]++;

        vector<vector<int>> res;
        res.reserve(freq.size());
        for (auto &p : freq) {
            res.push_back({p.first, p.second});
        }
        return res;
    }
};