#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int f(int p, int q){
	if(p<=0) return 0;
	if(p==q||q==0) return 1;
	if(q==1) return p;
	if(p<q) return 0;
	
	return f(p-1, q-1)+f(p-1, q);
}

int main(){
    int n, r;
    scanf("%d %d", &n, &r);
    printf("%d", f(n, r));
    
    return 0;
}

