#include <stdio.h>
#define abs(X) ((X)>0?(X):-(X))
int main(){
	int n, a[100001]={};
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int p=0, q=n-1, l=0, r=n-1, min=2147483647;
	while(p<q){
		if(abs(a[p]+a[q])==0){
			printf("%d %d", a[p], a[q]);
			return 0;
		} else if(abs(a[p]+a[q])<min){
			min=abs(a[p]+a[q]);
			l=p;r=q;
		}
		if(a[p]+a[q]>0) q--;
		else p++;
	}
	printf("%d %d", a[l], a[r]);
	
	return 0;
}
