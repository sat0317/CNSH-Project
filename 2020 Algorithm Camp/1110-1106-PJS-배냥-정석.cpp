#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define min(a, b) ((a)<(b)?(a):(b))
int max(int a, int b) {return (a)>(b)?(a):(b);}

int n, w, wi[101], vi[101];

int f(int i, int r){
	if(i>n) return 0;
	if(wi[i]>r) return f(i+1, r);
	return max(f(i+1, r), f(i+1, r-wi[i])+vi[i]) ;
}

int main(){
	scanf("%d %d", &n, &w);
	for(int i=1;i<=n;i++){
		scanf("%d %d", &wi[i], &vi[i]);
	}
		
	printf("%d", f(1, w));
    
    return 0;
}
