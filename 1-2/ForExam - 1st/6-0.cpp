#include <stdio.h>

int main(){
	int a[100][100];
	int i, n, m, j, cnt=1;
	scanf("%d %d", &n, &m);
	for(i=0;i<n+m;i++){
		for(j=0;j<=i&&j<m;j++){
			if(i-j<n)
			a[i-j][j]=cnt++;
		
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
