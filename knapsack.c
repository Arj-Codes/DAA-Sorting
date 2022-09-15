#include <stdio.h>
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
        knap[i][w] = max(prof[i - 1] + knap[i - 1][w - wt[i - 1]], knap[i - 1][w]);
      else
        knap[i][w] = knap[i - 1][w];
    }
  }
  return knap[n][W];
}

int main()
{
  int n;
  printf("For registration number : 209303126");
  printf("Enter number of values \n");
  scanf("%d", &n);
  int prof[n], wt[n];
  for (int i = 0; i < n; i++)
  {
    printf("Enter the profit and weight of object %d\n", (i + 1));
    scanf("%d", &prof[i]);
    scanf("%d", &wt[i]);
  }
  printf("Enter the capacity of the knapsack \n");
  int weight;
  scanf("%d", &weight);
  printf("Maximum Profit is %d", knapsack(weight, wt, prof, n));
  return 0;
}

