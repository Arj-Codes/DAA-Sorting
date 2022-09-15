#include<bits/stdc++.h>
using namespace std;
int max(int a, int b)
{
  if (a > b)
  {
    return a;
  }
  else
  {
    return b;
  }
}

int knapsack(int W, int wt[], int prof[], int n)
{
  int i, w;
  int knap[n + 1][W + 1];
  for (i = 0; i <= n; i++)
  {
    for (w = 0; w <= W; w++)
    {
      if (i == 0 || w == 0)
        knap[i][w] = 0;
      else if (wt[i - 1] <= w)
        knap[i][w]= max(knap[i-1][w],knap[i-1][w-wt[i-1]]+prof[i-1]);
      else
        knap[i][w] = knap[i - 1][w];
    }
  }
  return knap[n][W];
}

int main()
{
  int n;
  cout<<"For registration number : 209303126 \n";
  cout<<"Enter number of values \n";
  cin>>n;
  int prof[n], wt[n];
  for (int i = 0; i < n; i++)
  {
    cout<<"Enter the profit and weight of object"<<(i+1)<<endl;
    cin>>prof[i];
    cin>>wt[i];
  }
  cout<<"Enter the capacity of the knapsack \n";
  int weight;
  cin>>weight;
  cout<<"Maximum Profit is "<< knapsack(weight, wt, prof, n);
  return 0;
}
