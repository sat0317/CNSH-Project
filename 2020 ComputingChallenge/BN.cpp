#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
    int a[100][100], n, cnt=0;
    scanf("%d", &n);
    
    	for(int j=0;j<n;j++){
    for(int i=0;i<n;i++){
    		if(j%2) a[i][j]=++cnt;
    		else a[n-i-1][j]=++cnt;
		}
	}
    
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		printf("%d ", a[i][j]);
		}
		printf("\n");
	}
    
    
    
    return 0;
}

