#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
    int i, j;
int n=3, m=6;
scanf("%d %d", &n, &m);
for(i=1; i<=n; i++)
{
  for(j=1; j<=m; j++)
  {
    printf("%d %d\n", i, j);
  }
}
    
    return 0;
}

