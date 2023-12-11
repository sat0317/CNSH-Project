#include <stdio.h>
#include <string.h>
int d[1500000]={};

void rev(int l, int r){
	int m=(l+r)/2;
	if(l==r) return;
	for(int i=l;i<=m;i++) d[i]=1-d[i];
	rev(l, m);
	rev(m+1, r);
}

void gos(){
	for(int i=1;i<=10;i++){
		memset(d, 0, sizeof(d));
		rev(1, 1<<i);
		for(int j=1;j<(1<<i);j++){
			printf("%d", d[j]);
			if(j%4==0) printf(" ");
			if(j%16==0) printf("\n");
		}
		printf("\n\n");
	}
}

int main(){
	gos();
}
