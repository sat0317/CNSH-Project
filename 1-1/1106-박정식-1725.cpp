#include <stdio.h>

int main(){
	int n, m, i, j, cnt=0, ar[100][100];
	scanf("%d %d", &n, &m);
	
	for(i=0;i<m+n;i++){
		for(j=i;j>=0;j--){
			if(j>=n||i-j>=m) continue;
			ar[j][i-j]=++cnt;
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ", ar[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
