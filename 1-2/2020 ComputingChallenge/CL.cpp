#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
    int n, k, x1, x2, b, y1, y2, u;
	int m[1003][1003]={0, }, i, j;
    int d[1003][1003]={};
    
    scanf("%d %d %d", &n, &b, &k);
    for(int i=0;i<k;i++){
    	scanf("%d %d %d %d %d", &x1, &y1, &x2, &y2, &u);
    	d[x1][y1] = d[x1][y1]+u;
		d[x2+1][y2+1] = d[x2+1][y2+1]+u;

		d[x1][y2+1] = d[x1][y2+1]-u;
		d[x2+1][y1] = d[x2+1][y1]-u;
	}
    for(int i=1;i<=n;i++){
        for(int j=1;j<=b;j++){
            printf("%d\t", d[i][j]);
        }
        printf("\n");
    }
    
	printf("\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=b;j++){
            m[i][j] = d[i][j]+m[i][j-1]+m[i-1][j]-m[i-1][j-1];//m[i][j-1]과 m[i-1][j]의 공통 부분은 m[i-1][j-1]임; 공통부분 제거 
        }
    }
    
    for(i=1;i<=n;i++){
        for(j=1;j<=b;j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}

