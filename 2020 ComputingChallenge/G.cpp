#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
    int a, b;
    scanf("%d-%d", &a, &b);
    printf("%06d%07d", a , b);
    
    return 0;
}
