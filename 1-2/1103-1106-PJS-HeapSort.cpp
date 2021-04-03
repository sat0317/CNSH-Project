#include <stdio.h>
#define MAX 1<<5
int n, d[MAX];

void shiftdown(int k, int m)
{
  if(k > m/2) return; 
  
  int i=2*k;
  if(d[i+1]>d[i]&&i<m) i++;  //select bigger child node

  if(d[k]<d[i])    //if child bigger than parent
  {
    int t = d[k];    //swap
    d[k] = d[i];
    d[i] = t;
    
    shiftdown(i, m);  //recursive shiftdown
    
  }
}

void heapify(int k)   //make heap by shiftdown
{
  for(int i=k/2;i>=1;i--)  //for all parent nodes
    shiftdown(i, k);
}

void heapsort(int k)
{
  heapify(k);       //make heap [1, k]
    
  for(int i=k; i>=1; i--)
  {
    int t = d[1];   //swap max to last
    d[1] = d[i];    //last to root
    d[i] = t;
    
    shiftdown(1, i-1); //root shiftdown
  }
}

int main()
{
  scanf("%d", &n);

  for(int i=1;i<=n;i++) 
    scanf("%d", &d[i]);

  heapsort(n); 

  for(int i=1;i<=n;i++) 
    printf("%d ", d[i]);
}
