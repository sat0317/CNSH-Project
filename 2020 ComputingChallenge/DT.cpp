#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))
long long int n;
int ans(long long int t){
	if(t<10) return t;
	return t%10+ans(t/10);
}
int main(){
    scanf("%lld", &n);
    printf("%d", ans(n));
    
    return 0;
}

