#include <stdio.h>
	int n, a[100];

void sort(int n){
	int min;
	for(int i=1;i<=n;i++){
		min=i;
		for(int j=i+1;j<=n;j++){
			if(a[min]>a[j]) min=j;
		}
		int t=a[min];a[min]=a[i];a[i]=t;
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
