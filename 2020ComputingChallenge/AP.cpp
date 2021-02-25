#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
	int a, i, sum=0;
	scanf("%d", &a);
	for(i=0;sum<a;i++) sum+=i;
	printf("%d", i-1);
    
    return 0;
}

