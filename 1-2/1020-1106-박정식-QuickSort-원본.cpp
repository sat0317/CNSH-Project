#include <stdio.h>
#define MAX 1<<5
int n, d[MAX];

void quicksort(int l, int r)
{
	if(l>=r) return;
	
	int pivot = d[l];
	int p = l+1;
	int q = r;
	
	while(true)  //무한반복 
	{
		while(d[p]<=pivot && p<r) p++;  //data search greater than pivot
		while(d[q]>pivot && q>l) q--;   //data search less(+equal) than pivot
		
		if(p<q)         //swap
		{
			int t = d[p];
			d[p] = d[q];
			d[q] = t;
		}
		else            //pivot swap
		{
			int t = d[l];
			d[l] = d[q];
			d[q] = t;
			break;
		}
	}
	
	//divide & conquer
	quicksort(l, q-1);  // less(+equal) group
	quicksort(q+1, r);  // greater group
}

int main()
{
  scanf("%d", &n);         //# of data
  for(int i=1; i<=n; i++)  //data in
    scanf("%d", &d[i]);
  quicksort(1, n);         //quicksort
  for(int i=1; i<=n; i++)  //out
    printf("%d\n", d[i]);
}
