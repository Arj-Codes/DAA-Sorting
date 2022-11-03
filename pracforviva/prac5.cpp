#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int l, int h)
{
  int pi = l;
  int i = l + 1;
  int j = h;
  do
  {
    while (a[i] < a[pi])
    {
      i++;
    }
    while (a[j] > a[pi])
    {
      j--;
    }
    if (i < j)
    {
      int temp = a[i];
      a[i] = a[j];
      a[j] = temp;
    }
  } while (i < j);
  int temp = a[j];
  a[j] = a[pi];
  a[pi] = temp;
  return j;
}

void quickSort(int a[], int l, int h)
{
  if (l < h)
  {
    int pi = partition(a, l, h);
    quickSort(a, l, pi - 1);
    quickSort(a, pi + 1, h);
  }
}
int main()
{
  int n, x;
  cout << "Enter size of array" << endl;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cout << "Enter element " << (i + 1) << endl;
    cin >> a[i];
  }
  quickSort(a, 0, n - 1);
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
  cout << endl;
  return 0;
}