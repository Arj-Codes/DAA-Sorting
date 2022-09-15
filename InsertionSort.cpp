#include <iostream>
using namespace std;

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void insertionSort(int array[], int n) {
  for (int step = 1; step < n; step++) {
    int key = array[step];
    int j = step - 1;

    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

int main() {
  cout<<"For registration number : 209303126 \n";
  cout<<"Enter number of elements"<<endl;
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cout<<"Enter element "<<(i+1)<<endl;
    cin>>a[i];
  }
  insertionSort(a,n);
  cout << "Sorted array in ascending order:\n";
  printArray(a,n);
}