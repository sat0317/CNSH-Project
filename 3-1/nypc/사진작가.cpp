#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <stdlib.h>
#include <queue>
using namespace std;
typedef pair<int,int> pii;
typedef long long int lli;


int n, d[200100], dp[200100]={}, dps[1000100]={};

int main(){
	int end=0;
	scanf("%d", &n);
	for(int i=1;i<=n;i++) scanf("%d", d+i);
	for(int i=1;i<=n;i++){
		if(dps[d[i]]>end) end=dps[d[i]];
		dp[i]=i-end;
//		printf("%d: %d %d\n", i, dp[i], end);
		dps[d[i]]=i;
		
//		printf("%d: %d %d\n", i, dps[d[i]], end);
	}
	
	int mx=-1;
	for(int i=1;i<=n;i++){
		if(mx<dp[i]) mx=dp[i];
	}
	printf("%d", mx);
	
	return 0;
}
