#include <stdio.h>

void qsar(int arr[], int start, int end);

int main(){
	int n, a[1000]={0, };
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", a+i);
	}
	for(int i=0;i<n;i++){
		printf("%d\t", a[i]);
	}
	
	return 0;
}


void qsar(int arr[], int start, int end){
	int pivot=start;
	int left=start;
	int right=end-1;
	if(start>=end) return;
	
	while(left<right){
		if(left==pivot){
			if(arr[pivot]>arr[left]){
				int t=arr[pivot];
				arr[pivot]=arr[left];
				arr[left]=t;
				
				pivot=right;
				left++;
			}
			else {
				right--;
			}
		}
		if(right==pivot){
			if(arr[pivot]<arr[left]){
				int t=arr[pivot];
				arr[pivot]=arr[left];
				arr[left]=t;
				
				pivot=left;
				right--;
			}
			else {
				left++;
			}
		}
	}
	
	qsar(arr, start, pivot);
	qsar(arr, pivot+1, end);
}
