#include <stdio.h>
#define MAX 10

void selectionSort(int arr[], int n){
	int i, j, imsi, min;
	
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++)
			if(arr[j]<arr[min]) min=j;
		
		imsi=arr[i]; arr[i]=arr[min]; arr[min]=imsi;
	}
}

int main(){
	int n, i, j, d[MAX];
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		scanf("%d", &d[i]);
	}
	
	selectionSort(d, n);
	
	for(int i=0;i<n;i++){
		printf("%d\t", d[i]);
	}
	
	return 0;
}
