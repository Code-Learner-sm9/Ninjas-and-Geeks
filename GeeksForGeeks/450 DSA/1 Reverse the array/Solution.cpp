#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[] = {1,2,3,4};
  int intSize = sizeof(arr);
  
  int size = sizeof(arr)/sizeof(arr[0]);
  int sizeArrayoneElement = sizeof(arr[0]);
  
  cout<<"Integer Total Size: "<<intSize<<endl<<"Size of Current Array: "<<size<<endl<<"Size of One Array Element: "<<sizeArrayoneElement<<endl;

  cout<<endl<<"Reverse Array: "<<endl;
  for(int i=size-1;i>=0;i--)
  {
    cout<<arr[i]<<" ";
  }

  return 0;
}