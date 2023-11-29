#include <bits/stdc++.h>
using namespace std;
void reverseArray(vector<int> &arr, int m)
{
  int e = arr.size() -1;
  int s = m +1 ;
  for (int i = s; i<=e; i++)
  {
    swap(arr[i], arr[e]);
    e--;
  }
  cout<<endl;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int size, M;
    cin >> size >> M;
    vector<int> array(size);
    for (int i = 0; i < size; i++)
    {
      cin >> array[i];
    }
    reverseArray(array, M);
    for (int i = 0; i < size; i++)
    {
      cout << array[i] << " ";
    }
  }
  return 0;
}