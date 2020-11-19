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



void kloop(int n, int k){
    if(n<=k) return;
    printf("%d ", f(n-1, k));
    
    kloop(n, k+1);
}

void iloop(int n, int i){
    if(n<i) return;
    kloop(i, 0);
    printf("\n");
    iloop(n, i+1);
    
}

int main(){
	int n, k;
    scanf("%d", &n);
     printf("1\n");
    if(n>=2) iloop(n, 2);
	return 0;
}

