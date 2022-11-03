#include <iostream>
using namespace std;

void display(int *array, int size)
{
   for (int i = 0; i < size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void merge(int *array, int l, int m, int h)
{
   int i, j, k, al, ah;
   al = m - l + 1;
   ah = h - m;
   int larr[al], harr[ah];
   for (i = 0; i < al; i++)
      larr[i] = array[l + i];
   for (j = 0; j < ah; j++)
      harr[j] = array[m + 1 + j];
   i = 0;
   j = 0;
   k = l;
   while (i < al && j < ah)
   {
      if (larr[i] <= harr[j])
      {
         array[k] = larr[i];
         i++;
      }
      else
      {
         array[k] = harr[j];
         j++;
      }
      k++;
   }
   while (i < al)
   {
      array[k] = larr[i];
      i++;
      k++;
   }
   while (j < ah)
   {
      array[k] = harr[j];
      j++;
      k++;
   }
}
void mergeSort(int *array, int l, int h)
{
   int m;
   if (l < h)
   {
      int m = l + (h - l) / 2;
      mergeSort(array, l, m);
      mergeSort(array, m + 1, h);
      merge(array, l, m, h);
   }
}
int main()
{
   cout << "Registration Number : 209303126" << endl;
   int n;
   cout << "Enter the number of elements: " << endl;
   cin >> n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
      cout << "Enter element " << (i + 1) << endl;
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   mergeSort(arr, 0, n - 1);
   cout << "Array after Sorting: ";
   display(arr, n);
}