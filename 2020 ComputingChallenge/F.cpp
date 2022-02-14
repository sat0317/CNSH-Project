#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
    int a, b, c;
    scanf("%d.%d.%d", &a, &b, &c);
    printf("%04d.%02d.%02d", a, b, c);
    
    return 0;
}

