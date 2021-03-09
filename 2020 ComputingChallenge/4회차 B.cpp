#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(a>1){
		if(b>1){
			printf("¦«");
			for(int i=1;i<a-1;i++){
				printf("¦¡");
			}
			printf("¦«\n");
			for(int j=1;j<b-1;j++){
				printf("¦¢");
				for(int k=1;k<a-1;k++){
					printf(" ");
				}
				printf("¦¢\n");
			}
			printf("¦«");
			for(int i=1;i<a-1;i++){
				printf("¦¡");
			}
			printf("¦«");
				
		}
		else if(b==1){
			printf("¦«");
			for(int i=1;i<a-1;i++){
				printf("¦¡");
			}
			printf("¦«");
			
		}
	} else if(a==1){
			printf("¦«\n");
			for(int i=1;i<a-1;i++){
				printf("¦¢\n");
			}
			printf("¦«");
			
		
	}
	return 0;
}
