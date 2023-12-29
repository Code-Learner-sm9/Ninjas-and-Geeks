//https://www.codingninjas.com/studio/problems/maximum-equal-stack-sum_1062571
//https://phitron.io/ph453/video/ph453-15-4-maximum-equal-stack-sum-codingninjas-
#include <bits/stdc++.h> 
int getSum(stack<int> s)//copy stack not original. so it will not effect in actual values
{
    int sum = 0;
    while(!s.empty())
    {
        sum+=s.top();
        s.pop();
    }
    return sum;
}
int maxSum(stack<int> &stk1, stack<int> &stk2, stack<int> &stk3) {
    int sum1 = getSum(stk1);
    int sum2 = getSum(stk2);
    int sum3 = getSum(stk3);

    while(true)
    {
        if(sum1 == sum2 && sum2 == sum3) break;
        
        if(sum1 >= sum2 && sum1 >= sum3)
        {
            sum1-=stk1.top();
            stk1.pop();
        }
        else if(sum2 >= sum1 && sum2 >= sum3)
        {
            sum2-=stk2.top();
            stk2.pop();
        }
        else
        {
            sum3-=stk3.top();
            stk3.pop();
        }

    }
    return sum1; //we can return sum2 or sum3 bcz all 3 will be equal.
}