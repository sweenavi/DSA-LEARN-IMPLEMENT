class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l=0;
        
        for(int r=0;r<t.length();r++)
        {
            if(l<s.length()&&s[l]==t[r])
            {
                l++;
            }
        }
        return l==s.length();
    }
};