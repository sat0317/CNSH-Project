#include <stdio.h>
#define MAX 1<<5
int n, d[MAX];

void merge(int l, int m, int r)
{
  int temp[MAX];
  
  int i=l;
  int j=m+1;
  for(int k=l; k<=r; k++)  
    if(i<=m && (d[i]<=d[j] || j>r))
      temp[k] = d[i++];
    else
      temp[k] = d[j++];
  
  for(int k=l; k<=r; k++) 
    d[k] = temp[k];
}

void mergesort(int l, int r)
{
  if(l>=r) return;
  
  int m=(l+r)/2; 
  
	//divide & conquer
  mergesort(l, m);
  mergesort(m+1, r);
  merge(l, m, r);
}

int main()
{
  scanf("%d", &n);    

  for(int i=1; i<=n; i++) 
    scanf("%d", &d[i]);

  mergesort(1, n);   

  for(int i=1; i<=n; i++) 
    printf("%d\t", d[i]);
}
