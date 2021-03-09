#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

void selectionSort(int arr[], int n){
	int i, j, imsi, min;
	
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++)
			if(arr[j]<arr[min]) min=j;
		
		imsi=arr[i]; arr[i]=arr[min]; arr[min]=imsi;
		for(int k=0;k<n-1;k++) printf("%d ", arr[k]);
		printf("%d", arr[n-1]);
		if(i!=n-2) printf("\n");
	}
}

int main(){
    int n, a[1000];
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
    selectionSort(a, n);
    return 0;
}

