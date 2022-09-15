#include <iostream>
using namespace std;

void bubbleSort(int array[], int size)
{
  for (int i = 0; i < size; ++i)
  {
    for (int j = 0; j < size - i-1; ++j)
    {
      if (array[j] > array[j + 1])
      {
        cout<<"Swapping elements "<<array[j]<<" and "<<array[j + 1]<<endl;
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}

void printArray(int array[], int size)
{
  for (int i = 0; i < size; ++i)
  {
    cout << "  " << array[i];
  }
  cout << "\n";
}

int main()
{
  cout<<"Registration Number: 209303126"<<endl;
  cout<<"Enter size of array"<<endl;
  int n; cin>>n;
  int data[n]; 
  for(int i=0;i<n;i++){
    cout<<"Enter element "<<(i+1)<<endl;
    cin>>data[i];
  }
  bubbleSort(data, n);
  cout << "Sorted Array in Ascending Order:\n";
  printArray(data, n);
}