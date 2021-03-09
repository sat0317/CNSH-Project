#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int aim;
int gaedan(int t){
	if(t==1) return 1;
	if(t==2) return 2;
	if(t==0) return 0;
	return gaedan(t-2)+gaedan(t-1);
}

int main(){
    int t;
    scanf("%d", &t);
    aim=t;
    printf("%d", gaedan(t));
    
    return 0;
}

