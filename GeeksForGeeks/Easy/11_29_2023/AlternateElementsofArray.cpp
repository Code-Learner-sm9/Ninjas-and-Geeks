//odd number print
#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n)
{
  // for(int i=0;i<n;i++)
  // {
  //   if(arr[i] % 2 != 0)
  //   {
  //     cout<<arr[i]<<" ";
  //   }
  // }

  //alternative
  for(int i=0;i<n;i += 2)
  {
    cout<<arr[i]<<" ";
  }
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    
    print(arr,n);
  }
  return 0;
}