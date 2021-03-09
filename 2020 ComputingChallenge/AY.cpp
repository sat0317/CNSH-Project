#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
    int n, a, d;
    scanf("%d %d %d", &a, &d, &n);
    printf("%d", a+d*(n-1));
    
    return 0;
}

