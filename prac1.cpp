#include<bits/stdc++.h>
using namespace std;

void mergeArr(int *a,int l,int m,int h){ 
  int l1,l2;
  l1=m-l+1,l2=h-m;
  int la[l1],ha[l2];
  for(int i=0;i<l1;i++){
    la[i]=a[l+i];    
  }
  for(int i=0;i<l2;i++){
    ha[i]=a[m+1+i];
  }
  for(int i=0;i<l2;i++){
    cout<<la[i]<<",";
  }
  cout<<endl;
  for(int i=0;i<l2;i++){
    cout<<ha[i]<<",";
  }
}

void mergeSort(int *a,int l,int h){
   int m;
   while(l<h){  
   int m = l+(h-1)/2;
    mergeSort(a,l,m-1);
    mergeSort(a,m+1,h);
    mergeArr(a,l,m,h);
   }
}

int main()
{   
  int a[5]={100,-2,300,-4,500};
  int n=5;
  mergeSort(a,0,n-1);
  return 0;
}