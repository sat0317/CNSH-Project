#include <stdio.h>

int main(){
	int d[1002][1002]={0, }, i, j, n, m, x1, x2, y1, y2, u, k;
	scanf("%d %d %d", &n, &m, &k);
	for(i=1;i<=k;i++){
		scanf("%d %d %d %d %d", &x1, &y1, &x2, &y2, &u);
		d[x1][y1] = d[x1][y1]+u;
        d[x2+1][y2+1] = d[x2+1][y2+1]+u;
        
        d[x1][y2+1] = d[x1][y2+1]-u;
        d[x2+1][y1] = d[x2+1][y1]-u;
	}
	
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			d[i][j]+=d[i-1][j]+d[i][j-1]-d[i-1][j-1];
		}
	}
		
	
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
