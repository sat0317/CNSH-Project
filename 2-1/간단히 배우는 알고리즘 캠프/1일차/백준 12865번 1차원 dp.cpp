#include <stdio.h>
#define max(A, B) ((A)>(B)?(A):(B))
int main(){
	int n, k, w[101], v[101];
	int dp[100001]={};
	scanf("%d %d", &n, &k);
	for(int i=1;i<=n;i++){
		scanf("%d %d", &w[i], &v[i]);
	}
	
	for(int i=1;i<=n;i++){
		for(int j=k;j>=1;j--){
			if(j>=w[i]) dp[j]=max(dp[j], dp[j-w[i]]+v[i]);
		}
	}
	
	printf("%d", dp[k]);
	
	return 0;
} 
