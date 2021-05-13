#include <stdio.h>
#include <algorithm>

int main(){
	int n, x;
	int a[100001];
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	scanf("%d", &x);
	std::sort(a, a+n);
	int p=0, q=n-1, cnt=0;
	while(p<q){
		if(a[p]+a[q]==x){
			p++;q--;cnt++;
		} else if(a[p]+a[q]>x){
			q--;
		} else if(a[p]+a[q]<x){
			p++;
		}
	}
	printf("%d", cnt);
	
	return 0;
} 
