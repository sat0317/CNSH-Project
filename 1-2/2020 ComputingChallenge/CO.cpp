#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
    int n, g, a[100];
    scanf("%d %d", &n, &g);
    for(int i=0;i<n;i++){
    	scanf("%d", &a[i]);
	}
	for(int i=0;i<n;){
		int m=2147483647;
		for(int j=0;i<n&&j<g;j++){
			m=min(a[i], m);
			i++;
		}
		printf("%d " , m);
	}
    
    return 0;
}

