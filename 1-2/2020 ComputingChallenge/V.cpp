#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
    long long int a, b;
    
    scanf("%lld %lld", &a, &b);
    printf("%lld\n%lld\n%lld\n%lld\n%lld\n%.2lf", a+b, a-b, a*b, a/b, a%b, (double)a/b);
    
    return 0;
}

