#include <stdio.h>

int h[1<<10], n, s;

void up(int k){
	if(k==1) return;
	if(h[k]>h[k/2]){
		int t=h[k/2];
		h[k/2]=h[k];
		h[k]=t;
		
		up(k/2);
	}
}

void push(int k){
	h[++s]=k;
	up(s);
}

int main(){
	int a;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &a);
		push(a);
	}
	
	for(int k=1;k<=n;k*=2){
		for(int j=k;j<=n&&j<k*2;j++){
			printf("%d\t", h[j]);
		}
		printf("\n");
	}
	
	return 0;
}
