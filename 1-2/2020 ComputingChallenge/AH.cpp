#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", max(a, b));
    
    return 0;
}

