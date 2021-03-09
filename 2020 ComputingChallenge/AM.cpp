#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
    int n;
scanf("%d", &n);
while(n!=0)
{
  n=n-1; //n--; ¿Í °°´Ù.
  printf("%d\n", n);
}
    
    return 0;
}

