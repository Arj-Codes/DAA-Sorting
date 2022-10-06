#include <iostream>
using namespace std;

void printArray(int array[], int size)
{
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

int partition(int array[], int low, int high)
{
  int pivot = array[low];
  int i = low+1;
  int j=high;
  do{
  while(array[i] < pivot){
    i++;
  }
  while(array[j] > pivot){
    j--;
  }
  if(i<j){
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
  }
  }while(i<j);

    int temp = array[j];
    array[j] = array[low];
    array[low] = temp;
    return j;

}

void quickSort(int array[], int low, int high)
{
  if (low < high)
  {
    int pi = partition(array, low, high);
    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
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
  cout << "Unsorted Array: \n";
  printArray(data, n);
  quickSort(data, 0, n - 1);
  cout << "Sorted array in ascending order: \n";
  printArray(data, n);
}