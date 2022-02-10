#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int ans(int n){
	if(n==0) return 0;
	if(n==1) return 1;
	if(n==2) return 2;
	if(n==3) return 4;
	return ans(n-1)+ans(n-2)+ans(n-3);
}

int main(){
	int n;
    scanf("%d", &n);
    printf("%d", ans(n));
    return 0;
}

