//https://www.codingninjas.com/studio/problems/valid-parenthesis_795104?interviewProblemRedirection=true&leftPanelTabValue=PROBLEM
bool isValidParenthesis(string s)
{
    stack<char> st;
        for(char c:s)
        {
            if(c=='(' || c=='{' || c=='[')
            {
                st.push(c);
            }
            else{
                if(st.empty())
                {
                    return false;
                }
                else
                {
                    if(c==')' && st.top() == '(')
                    {
                        st.pop();
                    }
                    else if(c=='}' && st.top() == '{')
                    {
                        st.pop();
                    }
                    else if(c==']' && st.top() == '[')
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
            }
            
        }
        if(st.empty()) return true;
        else return false;
}