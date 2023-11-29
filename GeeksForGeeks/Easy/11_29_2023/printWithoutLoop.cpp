#include<bits/stdc++.h>
using namespace std;
class Solution
{
  public:
  void print(int n)
  {

    if(n==0)
    {
      return;
    }
    print(n-1);
    cout<<n<<" ";
  }
};
int main()
{
  int n;
  cin>>n;
  Solution ob;
  ob.print(n);
  return 0;
}