//we have to kth number of max and min element
//suppose if we have an array 1 2 3 4 5 and k=1 then we have to find 1st maximum and minimum element which is max 5 and min 1
//again if we give k=2 then 2nd max and min element is max 4 and min 2.. this way.
// first we have to sort the whole array to find the result
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  sort(arr,arr+n); //first element of array and last element .it will sort from first to before the last which is arr+n
  for(int i=0;i<n;i++)//lets see our sorted array.
  {
    cout<<arr[i]<<" ";
  }

  cout<<endl<<k<<"th Minimum Element: "<<" "<<k<<"th Maximum Element: "<<endl;
  cout<<arr[k-1]<<" "<<arr[n-k]<<endl;
  //why k-1 and n-k??
  //k-1 for minimum element as we know k is the index which element we have to return so if we sorted the array and now its looks like 1 2 3 4 5
  //then for k=1 we have to return min element 1 and max element 5
  //to do that if for min element we have to return 1 so if we write k-1 which is 1-1 as k=1 then 1-1=0 and in oth index we have our output 1 
  //also for max element which should be 5 so n-k means n= total size that is 5 and k =1 so n-k = 5-1 that is 4 and in 4th index we have our expected value that is 5. 
  // similary for k=2 output will be min 2 and max 4
  //to get this we have to do k-1 = 2-1 = 1th index =2
  //and n-k = 5-2 =3rd element is 4 

  // and also to get this answers we have to sort it first 
  return 0;
}