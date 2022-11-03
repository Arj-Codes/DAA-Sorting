#include<bits/stdc++.h>
using namespace std;
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
  for(int i=1;i<n;i++){
    int k = a[i];
    int j=i-1;
    while(j>=0 && k<a[j]){
      a[j+1]=a[j];
      j--;
    }
    a[j+1]=k;
  }
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  return 0;
}