// https://practice.geeksforgeeks.org/problems/sum-of-series2811/1?page=1&difficulty=School&sortBy=submissions

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  long long seriesSum(int n)
  {
    int sum = 0;
    for(int i=1;i<=n;i++)
    {
      sum = sum + i;
    }
    return sum;
  }
};

int main()
{
  int n;
  cin >> n;
  Solution sum0;
  int ans = sum0.seriesSum(n);
  cout<<ans<<endl;

  return 0;
}