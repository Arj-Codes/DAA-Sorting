#include <iostream>
using namespace std;


void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}


void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void selectionSort(int array[], int size) {
  for (int i = 0; i < size - 1; i++) {
    int x = i;
    for (int j = i+1; j<size; j++) {
      if (array[j] < array[x])
        x = j;
    }
    swap(&array[x], &array[i]);
  }
}


int main() { 
  cout<<"Registration Number: 209303126"<<endl;
  int n,x;
  cout<<"Enter size of array"<<endl;
  cin>>n;
  int data[n];
  for(int i=0;i<n;i++){
    cout<<"Enter element "<<(i+1)<<endl;
    cin>>data[i];
  }
  selectionSort(data, n);
  cout << "Sorted array in Acsending Order:\n";
  printArray(data, n);
}