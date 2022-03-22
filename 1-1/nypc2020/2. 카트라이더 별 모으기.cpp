#include <stdio.h>

int main(){
	int a, b, c;
	int t[3][3]={0, };
	int n;
	int i;
	
	scanf("%d:%d:%d", &t[0][0], &t[0][1], &t[0][2]);
	scanf("%d:%d:%d", &t[1][0], &t[1][1], &t[1][2]);
	scanf("%d:%d:%d", &t[2][0], &t[2][1], &t[2][2]);
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		int imsi=0;
		scanf("%d:%d:%d", &a, &b, &c);
		
		if(a==t[0][0]){
			if(b==t[0][1]){
				if(c<=t[0][2]){
					printf("*");
					imsi++;
				}
			} else if(b<t[0][1]){
				printf("*");
				imsi++;
			}
		} else if(a<t[0][0]){
			printf("*");
			imsi++;
		}
		
		if(a==t[1][0]){
			if(b==t[1][1]){
				if(c<=t[1][2]){
					printf("*");
					imsi++;
				}
			} else if(b<t[1][1]){
				printf("*");
				imsi++;
			}
		} else if(a<t[1][0]){
			printf("*");
			imsi++;
		}
		
		if(a==t[2][0]){
			if(b==t[2][1]){
				if(c<=t[2][2]){
					printf("*");
					imsi++;
				}
			} else if(b<t[2][1]){
				printf("*");
				imsi++;
			}
		} else if(a<t[2][0]){
			printf("*");
			imsi++;
		}
		
		if(!imsi) printf(":(");
		printf("\n");
	} 
	
	return 0;
}
