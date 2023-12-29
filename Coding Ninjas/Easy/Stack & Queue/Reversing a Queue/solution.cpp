//https://www.codingninjas.com/studio/problems/reversing-a-queue_982934?leftPanelTabValue=PROBLEM
#include <bits/stdc++.h> 
queue<int> reverseQueue(queue<int> q)
{
    stack<int> newq;
    while(!q.empty())
    {
        // int k = q.front();
        // newq.push(k);
        newq.push(q.front());
        q.pop();
    }
    while(!newq.empty())
    {
        q.push(newq.top());
        newq.pop();
    }
    return q;
}