#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
    int i, n;
    scanf("%d", &n);
for(i=1; i<=n; i++) //1부터 100까지 반복
{
  if(i%3==0) printf("X ");
  else printf("%d ", i);
}
    
    return 0;
}

