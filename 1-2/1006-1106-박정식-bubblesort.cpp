#include <stdio.h>
#define max (20)

void bubble(int arr[], int n){
	int i, j, imsi;
	
	for(i=1;i<n;i++){
		for(j=1;j<n;j++){
			if(arr[j-1]>arr[j]){ //swap(&arr[j-1], &arr[j]); 
				imsi=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=imsi;
			}
		}
	}
}

int main(){
	int i, n=max+1;
	int d[max];
	while(max<n) scanf("%d", &n);
	
	for(i=0;i<n;i++){
		scanf("%d", &d[i]);
	}
	
	bubble(d, n);
	
	for(i=0;i<n;i++){
		printf("%d\t", d[i]);
	}
	
	return 0;
}
