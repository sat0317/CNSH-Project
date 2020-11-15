#include <stdio.h>

int h[100];
int th=0;

void up(int k){
	if(k==1) return;
	if(h[k/2]<h[k]) {
		int t=h[k/2];
		h[k/2]=h[k];
		h[k]=t;
		up(k/2);
	}
}

void insert(int a){
	h[++th]=a;
	up(th);
}

int main(){
	int k;
	int n;
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++){
		scanf("%d", &k);
		insert(k);
	}
	
	for(int i=1;i<=n;i*=2){
		for(int j=i;j<i*2&&j<=n;j++){
			printf("%d\t", h[j]);
		}
		printf("\n");
	}
	
	return 0;
} 
