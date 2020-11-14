#include <stdio.h>

int main(){
	int a, n, i, j, t[100]={};
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		scanf("%d", &t[i]);
	}
	
	for(i=1;i<=n;i*=2){
		for(j=i;j<i*2&&j<=n;j++){
			printf("%d\t", t[j]);
		}
		printf("\n");
	}
		printf("\n");
		
	scanf("%d %d", &i, &j);
	printf("%d", t[(i-1)*2+j-1]);
	
	return 0;
}
