#include <stdio.h>

int main(){
	long long int i; int ar[100], n, k;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", ar+i);
	}
	i=0; 
	for(int j=0;j<n;j++){
		printf("%d ", i=ar[j]+i);
	}
	
	return 0;
}
