#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  float p=0.0;
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
  float r[n];
  for(int i=0;i<n;i++){
    r[i]=(float)prof[i]/(float)wt[i];
  }
  cout<<endl;
  for(int i=0;i<n;i++){
    for(int j=0;j<n-1-i;j++){
      if(r[j+1]>r[j]){
        int temp1=r[j+1];
        r[j+1]=r[j];
        r[j]=temp1;
        int temp2=prof[j+1];
        prof[j+1]=prof[j];
        prof[j]=temp2;
        int temp3=wt[j+1];
        wt[j+1]=wt[j];
        wt[j]=temp3;
      }
    }
  }
  int i;
  for(i=0;i<n;i++){
    if(weight>0 && wt[i]<=weight){
      weight-=wt[i];
      p+=prof[i];
    }
    else break;
  }
   cout<<"Profit till now and value of i is "<<weight<<" "<<wt[i]<<endl;
    if(weight>0){
      p+=prof[i]*((float)weight/(float)wt[i]);
    }
  cout<<"Maximum profit is : "<<p<<endl;
  return 0;
}
