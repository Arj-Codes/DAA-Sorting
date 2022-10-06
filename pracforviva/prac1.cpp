#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int l, int h, int x)
{
  while (l < h)
  {
    int m = (h + l) - l / 2;
    if (x == a[m])
    {
      return m + 1;
    }
    else if (x > a[m])
    {
      l=m+1;
    }
    else{
      h=m-1;
    }
  }
  return -1;
}

int main()
{
  int n, x;
  cout << "Enter size of array" << endl;
  cin >> n;
  int array[n];
  for (int i = 0; i < n; i++)
  {
    cout << "Enter element " << (i + 1) << endl;
    cin >> array[i];
  }
  cout << "Enter the element to look for " << endl;
  cin >> x;
  int m = binarySearch(array,0,n-1,x);
  cout << m;
}