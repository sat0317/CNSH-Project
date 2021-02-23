#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
    int a=1;
    while(a)
    {
    	scanf("%d", &a);
    	if(a) printf("%d\n", a);
	}
    return 0;
}

