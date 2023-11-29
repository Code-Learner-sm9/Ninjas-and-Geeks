#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	bool result = 1;
      for(int i=0;i<n;i++)
      {
        int remainder,digit=0, original = a[i];
        while(a[i] != 0)
        {
          remainder = a[i] % 10;
          digit = digit *10 + remainder;
          a[i] = a[i]/10;
        }
        if(original == digit)
        {
          result = 1;
        }
        else 
        {

        result = 0;
        break;
        
        }

      }
      return result;
      
    }

};
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  Solution ob;
  cout<<ob.PalinArray(arr,n);
  
  return 0;
}