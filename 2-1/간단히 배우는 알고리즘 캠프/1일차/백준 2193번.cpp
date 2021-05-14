#include <stdio.h>

long long int dp[91][2];

int main(){
	int n;
	scanf("%d", &n);
	
	dp[0][0]=0;
	dp[0][1]=1;
	
	for(int i=1;i<91;i++){
		dp[i][0]=dp[i-1][0]+dp[i-1][1];
		dp[i][1]=dp[i-1][0];
	}
	printf("%lld", dp[n-1][0]+dp[n-1][1]);
	
	return 0;
} 
