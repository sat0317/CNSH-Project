#include <stdio.h>

int main(){
	int a[100][100]={}, m, n, r=1, x=-1, y=0, i, j, cnt=1;
	
	scanf("%d %d", &n, &m);
	for(i=0;cnt<=n*m;i++){
		for(j=0;j<n-i;j++){
			x+=r;
			a[x][y]=cnt++;
		}
		for(j=0;j<m-i-1;j++){
			y+=r;
			a[x][y]=cnt++;
		}
		
		r*=-1;
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
