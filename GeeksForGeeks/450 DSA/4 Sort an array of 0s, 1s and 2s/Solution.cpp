//Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order. sort the array without sorting function
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int zero=0, one=0, two=0;
  for(int i=0;i<n;i++)
  {
    if(arr[i]==0)
    {
      zero++;
    }
    else if(arr[i]==1)
    {
      one++;
    }
    else if(arr[i]==2)
    {
      two++;
    }

  }
  for(int i=0;i<zero;i++)
  {
    arr[i] = 0;
  }
  for(int i=zero;i<zero+one;i++)
  {
    arr[i] = 1;
  }
  for(int i=zero+one;i<zero+one+two;i++)
  {
    arr[i] = 2;
  }
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  
  return 0;
}