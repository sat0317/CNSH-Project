#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
    int a, b, c, d; double ans;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    ans=(double)a*b*c*d;
	printf("%.1lf MB", ans/8/1024/1024);
    
    return 0;
}

