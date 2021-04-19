#include <stdio.h>

int main(){
	int cnt=0, n;
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++){
		for(int j=i;i+j<=n;j++){
			for(int k=j;i+j+k<=n;k++){
				if(i+j+k==n&&i+j>k){
					cnt++;
				}
			}
		}
	}
	printf("%d", cnt);
	return 0;
}
