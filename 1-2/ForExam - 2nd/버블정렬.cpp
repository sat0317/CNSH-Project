#include <stdio.h>
	int n, a[100];

void sort(int n){
	for(int i=0;i<n-1;i++){
		for(int j=1;j<n-i;j++){
			if(a[j]<a[j-1]) {
				int t=a[j];a[j]=a[j-1];a[j-1]=t;
			}
		}
	} 
}

int main(){
	
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	
	sort(n);
	
	for(int i=0;i<n;i++){
		printf("%d\t", a[i]);
	}
		
	return 0;
}
