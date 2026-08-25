class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> set;
        for(int n: nums){
            set.insert(n);
        }
        int mul=k;
        while(set.contains(mul)){
            mul+=k;
        }
        return mul;
    }
};