#include <stdio.h>
#define MAX (1<<5)

int search(int arr[], int n, int tar){
	for(int i=0;i<n;i++){
		if(arr[i]==tar){
			return i;
		}
	}
	return -1;
}

int main(){
	int a[MAX]={}, n, tar, resu;
	
	scanf("%d", &tar);
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	resu=search(a, n, tar); 
	
	if(resu+1){
		printf("%d", resu+1);
	} else {
		printf("404 NOT FOUND");
	}
	
	return 0;
}
