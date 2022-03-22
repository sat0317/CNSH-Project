#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
    int n, a[100];
    scanf("%d", &n);
    for(int i=0;i<n/2;i++){
    	int i1, i2;
    	scanf("%d %d", &i1, &i2);
    	printf("%d ", min(i1, i2));
	}
    
    return 0;
}

