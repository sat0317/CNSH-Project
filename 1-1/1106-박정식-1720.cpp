#include <stdio.h>

int main(){
	int n, i, cnt=0, j, ar[100][100];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		if((i%2)){
			for(j=0;j<n;j++){
				ar[j][i]=++cnt;
			}
		}
		else {
			for(j=n;j>0;j--){
				ar[j-1][i]=++cnt;
			}
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ", ar[i][j]);
		}
		printf("\n"); 
	}
	
	return 0;	
}
