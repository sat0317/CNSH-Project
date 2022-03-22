#include <stdio.h>

int main(){
	int n;
	int a[8];
	int i, j;
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		int sumA=0, sumB=0, maxA=0, maxB=0;
		for(j=0;j<8;j++){
			scanf("%d", &a[j]);
		}
		
		for(j=0;j<4;j++){
			sumA+=a[j];
			if(maxA<a[j]) maxA=a[j];
		}
		for(j=4;j<8;j++){
			sumB+=a[j];
			if(maxB<a[j]) maxB=a[j];
		}
		
		if(sumA>sumB){
			if(maxA>maxB){
				printf("R\n");
			} else {
				printf("S\n");
			}
		} else if(maxA>maxB){
			printf("I\n");
		} else printf("R\n");
	}
	
	return 0;
}
