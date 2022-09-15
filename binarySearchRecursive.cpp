#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int l, int h)
{

  if (l == h)
  {
    if (array[l] == x)
      return l;
    else
    {
      return -1;
    }
  }
  else{
    int m = l+(h-l)/2;
    if(x==array[m]){
      return m;
    }
    else if(x<array[m]){
      return binarySearch(array,x,l,m-1);
    }
    else{
      return binarySearch(array,x,m+1,h);
    }
    return -1;
  }
}

int main(void)
{
  int n, x;
  cout<<"Registration Number: 209303126"<<endl;
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
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    cout << "Not found";
  else
    cout << "Element is found at index " << result << " and position " << result + 1;
}