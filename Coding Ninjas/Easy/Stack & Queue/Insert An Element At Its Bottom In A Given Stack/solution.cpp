//https://www.codingninjas.com/studio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?leftPanelTabValue=PROBLEM
//https://phitron.io/ph453/video/ph453-15-3-insert-element-at-bottom-of-stack-codingninjas-
#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    stack<int> st;
    while(!myStack.empty())
    {
        st.push(myStack.top());
        myStack.pop();
    }
    st.push(x);

    while(!st.empty())
    {
        myStack.push(st.top());
        st.pop();
    }
    return myStack;
}