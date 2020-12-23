#include <stdio.h>
	int n, a[100];

void sort(int n){
	for(int i=1;i<=n;i++){
		for(int j=i;j>1&&a[j]<a[j-1];j--){
			int t=a[j];a[j]=a[j-1];a[j-1]=t;
		}
	}
}

int main(){
	
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		scanf("%d", &a[i]);
	}
	
	sort(n);
	
	for(int i=1;i<=n;i++){
		printf("%d\t", a[i]);
	}
		
	return 0;
}
