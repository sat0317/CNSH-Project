#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
    long long int a, m, d, n;
    scanf("%lld %lld %lld %lld", &a, &m, &d, &n);
    for(int i=1;i<n;i++){
    	a=a*m+d;
	}
    printf("%lld", a);
    return 0;
}

