#include <stdio.h>

int main(){
	int n, i, m, cnt=0, j, ar[100][100];
	scanf("%d %d", &n, &m);
	for(i=0;i<n;i++){
		if(!(i%2)){
			for(j=0;j<m;j++){
				ar[n-i-1][m-j-1]=++cnt;
			}
		}
		else {
			for(j=m;j>0;j--){
				ar[n-i-1][m-j]=++cnt;
			}
		}
	}
	
	for(i=0;i<n;i++){
		for(j=m;j>0;j--){
			printf("%d ", ar[i][j-1]);
		}
		printf("\n"); 
	}
	
	return 0;	
}
