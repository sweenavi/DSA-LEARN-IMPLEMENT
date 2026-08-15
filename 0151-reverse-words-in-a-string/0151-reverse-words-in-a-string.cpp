class Solution {
public:
    string reverseWords(string s) {
        stack<string> stk;
        int n=s.size();
        int i=0;
        while(i<n){
        string word="";
        while(i<n && s[i]==' ')
        {
           i++;
        }
        while(i<n && s[i]!=' ')
        {
            word+=s[i];
            i++;
        }
        stk.push(word);
        }
string result="";
        while(!stk.empty())
        {
            string w=stk.top();
            stk.pop();
            if (!result.empty()) {
    result += " ";
}

result += w;
        }
        return result;
    }
};