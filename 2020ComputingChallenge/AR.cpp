#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
	int a;
    scanf("%x", &a);
    for(int i=1;i<16;i++){
    	printf("%X*%X=%X\n", a, i, a*i);
	}
    
    return 0;
}

