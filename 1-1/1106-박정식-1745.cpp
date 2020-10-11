#include <stdio.h>

int main(){
	int n, k[50][2];
	scanf("%d", &n);
	
	for(int i=0;i<n/2;i++){
		scanf("%d %d", &k[i][0], &k[i][1]);
	}
	
	for(int i=0;i<n/2;i++){
		printf("%d ", k[i][0]>k[i][1] ? k[i][0] : k[i][1]);
	}
	
	return 0;
}
