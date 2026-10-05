class Solution {
public:
    int scoreOfParentheses(string s) {

        stack<int> st;
        st.push(0);

        for(int c:s)
        {
            if(c=='('){st.push(0);}
            else{
                int in_score=st.top();
                st.pop();
                int sc;
                if(in_score==0)
                {
                    sc=1;
                }
                else{
                    sc=2*in_score;
                }

                st.top()+=sc;
            }
        }
        return st.top();
    }
};