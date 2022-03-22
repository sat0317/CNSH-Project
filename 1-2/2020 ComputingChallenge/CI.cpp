#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
    int n, a, b=0;
    
    scanf("%d", &n);
    for(int i=0;i<n;i++){
    	scanf("%d", &a);
    	b=b+a;
    	printf("%d ", b);
	}
    
    return 0;
}

