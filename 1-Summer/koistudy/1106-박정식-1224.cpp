#include <stdio.h>
char imsi[1001];
short a[2][1000]={0, };

int scanning(int i, int j){
	if(a[i][j]==0) return 0;
	else return a[i-1][j]+a[i][j];
}

int main(){
	int n, m; 
	scanf("%d %d", &n, &m);
	for(int i=0;i<n;i++){
		scanf("%s", imsi);
		for(int j=0;j<m;j++){
			a[1][j]=imsi[j]-'0';
			a[1][j]=scanning(1, j);
			printf("%d\t", a[1][j]);
			a[0][j]=a[1][j];
		}
		printf("\n");
	}
	
	
	return 0;
}
