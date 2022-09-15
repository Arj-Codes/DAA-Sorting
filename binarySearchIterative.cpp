#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int l, int h)
{
  while (l <= h)
  {
    int m = l+(h-l)/2;
    if (array[m] == x)
      return m;
    if (array[m] < x)
      l = m+1;
    else
      h = m-1;
  }
  return -1;
}

int main(void)
{
  cout<<"Reg Number : 209303126"<<endl;
  int n,x;
  cout<<"Enter size of array"<<endl;
  cin>>n;
  int array[n];
  for(int i=0;i<n;i++){
    cout<<"Enter element "<<(i+1)<<endl;
    cin>>array[i];
  }
  cout<<"Enter the element to look for "<<endl;
  cin>>x;
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    cout<<"Not found";
  else
    cout<<"Element is found at index "<< result<<" and position "<<result+1;
}