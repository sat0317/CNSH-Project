#include <stdio.h>
char dp[101][101][1010]={};
int n, a[101][101]={};

void add(int a, int b, int x, int y){
	for(int i=999;i>=0;i--){
		dp[a][b][i]+=dp[x][y][i];
		if(dp[a][b][i]>=10){
			dp[a][b][i-1]+=dp[a][b][i]/10;
			dp[a][b][i]%=10;
		}
	}
}

int main(){
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	dp[1][1][999]=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]!=0){
				if(i+a[i][j]<=n) add(i+a[i][j], j, i, j); //dp[i+a[i][j]][j]+=dp[i][j];
				if(j+a[i][j]<=n) add(i, j+a[i][j], i, j); //dp[i][j+a[i][j]]+=dp[i][j];
			}
		}
	}
	int flag=0;
	for(int i=0;i<1000;i++){
		if(dp[n][n][i]) flag=1;
		if(flag) printf("%d", dp[n][n][i]);
	}
	if(flag==0) printf("0");
	return 0;
} 
