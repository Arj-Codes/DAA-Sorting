#include <bits/stdc++.h>
using namespace std;

void merge(int *a, int l, int m, int h)
{
  int l1 = m - l + 1;
  int l2 = h - m ;
  int a1[l1], a2[l2];
  for (int i = 0; i < l1; i++)
  {
    a1[i] = a[l + i];
  }
  cout<<"Sorting : "<<endl;
  for(int i=0;i<l1;i++){
    cout<<a1[i]<<" ";
  }
  cout<<endl;
  for (int j = 0; j < l2; j++)
  {
    a2[j] = a[m + 1 + j];
  }
  cout<<"Sorting : "<<endl;
  for(int i=0;i<l1;i++){
    cout<<a1[i]<<" ";
  }
  cout<<endl;
  int k = l;
  int i = 0, j = 0;
  while (i < l1 && j < l2)
  {
    if (a1[i] <= a2[j])
    {
      a[k] = a1[i];
      i++;
    }
    else
    {
      a[k] = a2[j];
      j++;
    }
    k++;
  }
  while (i < l1)
  {
    a[k] = a1[i];
    i++;
    k++;
  }
  while (j < l2)
  {
    a[k] = a2[j];
    j++;
    k++;
  }
}

void mergeSort(int *a, int l, int h)
{
  if (l < h)
  {
    int m = l + (h - l) / 2;
    mergeSort(a, l, m);
    mergeSort(a, m + 1, h);
    merge(a, l, m, h);
  }
}

int main()
{
  int n;
  cout << "Enter the number of elements: " << endl;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cout << "Enter element " << (i + 1) << endl;
    cin >> a[i];
  }
  mergeSort(a, 0, n - 1);
  cout<<"Hello"<<endl;
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
  cout << endl;
  return 0;
}