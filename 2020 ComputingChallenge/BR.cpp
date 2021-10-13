#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
    int a[100][100], n, m, cnt=0;
    scanf("%d %d", &n, &m);
    
    	for(int j=0;j<m;j++){
    for(int i=0;i<n;i++){
    		if(j%2==0) a[i][m-j-1]=++cnt;
    		else a[n-i-1][m-j-1]=++cnt;
		}
	}
    
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		printf("%d ", a[i][j]);
		}
		printf("\n");
	}
    
    
    
    return 0;
}

