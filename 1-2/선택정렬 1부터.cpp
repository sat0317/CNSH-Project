#include <stdio.h>
#define MAX 20

void selection_sort(int d[], int n) {
   int min, tmp;
   for (int i=1;i<n;i++) {
      min=i;
      for (int j=i+1;j<=n;j++) {
         if (d[i]<d[min]) {
            min=j;
         }
      }
      tmp=d[i];
      d[i]=d[min];
      d[min]=tmp;
   }
}

int main() {
   int n, d[MAX];
   printf("# of data : ");
   scanf("%d", &n);
   
   for (int i=1;i<=n;i++) {
      printf("num #%d : ", i);
      scanf("%d", &d[i]);
   }
   selection_sort(d, n);
   for (int i=1;i<=n;i++) {
      printf("%d ", d[i]);
   }
}
