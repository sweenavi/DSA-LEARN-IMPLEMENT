class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();

        if(n!=m){ return false;}
        unordered_map<char, int> mp1,mp2;
        for(char c:word1){ mp1[c]++;}
        for(char c:word2){ mp2[c]++;}

        unordered_set<char> s1,s2;

        for(char c:word1){ s1.insert(c);}
        for(char c:word2){ s2.insert(c);}

        if(s1!=s2){ return false;}
        
        vector<int> f1, f2;
        for(auto it:mp1){f1.push_back(it.second);}
         for(auto it:mp2){f2.push_back(it.second);}

         sort(f1.begin(),f1.end());
         sort(f2.begin(),f2.end());

         return f1==f2;
    }
};