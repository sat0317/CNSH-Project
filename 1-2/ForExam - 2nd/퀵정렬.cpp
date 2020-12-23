#include <stdio.h>
	int n, a[100];

void sort(int l, int r){
	int pb=a[l];
	int p=l+1;
	int q=r;
	if(l>=r) return;
	
	while(1){
		while(p<r&&a[p]<pb) p++;
		while(q>l&&a[q]>=pb) q--;
		
		if(p<q){
			int t=a[p];a[p]=a[q];a[q]=t;
		}
		else {
			int t=a[q];a[q]=a[l];a[l]=t;
			break;
		}
	}
	
	sort(l, q-1);
	sort(q+1, r);
}

int main(){
	
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		scanf("%d", &a[i]);
	}
	
	sort(1, n);
	
	for(int i=1;i<=n;i++){
		printf("%d\t", a[i]);
	}
		
	return 0;
}
