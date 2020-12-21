#include <stdio.h>
	int n, a[100];

void merge(int l, int m, int r){
	int i=l, j=m+1;
	int t[100];
	for(int k=l;k<=r;k++){
		if(i<=m&&(a[i]<=a[j]||j>r)){
			t[k]=a[i++];
		} else t[k]=a[j++];
	}
	for(int k=l;k<=r;k++){
		a[k]=t[k];
	}
}

void sort(int l, int r){
	int m=(l+r)/2;
	if(l>=r) return;
	
	sort(l, m);
	sort(m+1, r);
	merge(l, m, r);
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
