#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  long long seriesSum(int n)
  {
    //(n*(n+1))/2 is the sum of arithmetic series with n terms.
    long long Sum = n;
    return (Sum*(Sum+1))/2;
  }
};

int main()
{
  int n;
  cin >> n;
  Solution sum0;
  auto ans = sum0.seriesSum(n);
  cout<<ans<<endl;

  return 0;
}