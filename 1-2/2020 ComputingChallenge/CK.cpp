#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
    int n, k, s, e, u;
    int d[100]={};
    
    scanf("%d %d", &n, &k);
    for(int i=0;i<k;i++){
    	scanf("%d %d %d", &s, &e, &u);
    	d[s-1] = d[s-1]+u;
d[e] = d[e]-u;

	}
    for(int i=0;i<n;i++){
    	printf("%d ", d[i]);
	}
	int a, b;
	printf("\n");
	for(int i=0;i<n;i++){
    	a=d[i];
		b=b+a;
    	printf("%d ", b);
	}
    return 0;
}

