#include <stdio.h>
	int n, a[100], ans, k;

void search(int n, int k){
	int s=1, e=n;
	int m;
	
	while(s<=e){
		m=(s+e)/2;
		if(a[m]==k){
			ans=m;break;
		} else if(a[m]<k){
			s=m+1;
		} else e=m-1;
	}
	if(!ans)ans=-1;
}

int main(){
	
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		scanf("%d", &a[i]);
	}
	scanf("%d", &k);
	search(n, k);
	
	printf("%d", ans);
		
	return 0;
}
