#include <stdio.h>
#define abs(X) (X>0?X:-(X))
/* THIS IS REAL ANSWER*/

	int cha[500001];
	int n;
	int imsi[500001];
	int newp, many;

void sorts(int arr[], int start, int end);

int main(){

	scanf("%d %d %d", &n, &newp, &many);
	
	for(int i=0;i<n;i++){
		scanf("%d", &cha[i]);
		cha[i]=cha[i]-newp;
		imsi[i]=i+1;
		
	}
	
	sorts(cha, 0, n);
	
	for(int c=0;c<many;c++){
		printf("%d ", imsi[c]);
	}

	return 0;
}

void sorts(int arr[], int start, int end){
	int left = start;	
	int right = end-1;	
	int pivot = start;	
	
	if (start >= end) return;
	
	while (left<right){
		if (left == pivot){	
			if (abs(arr[pivot]) > abs(arr[right])||(abs(arr[pivot]) == abs(arr[right])&&(arr[pivot] > arr[right]))){
				int temp = arr[right]; 
				arr[right] = arr[pivot];
				arr[pivot] = temp;
				temp = imsi[right]; 
				imsi[right] = imsi[pivot];
				imsi[pivot] = temp;
				pivot = right;
				left++;
			} else {
				right--;
			}
		} else if (pivot == right){
			if ( abs(arr[pivot]) < abs(arr[left])||(abs(arr[pivot]) == abs(arr[left])&&(arr[pivot] < arr[left]))){
				int temp = arr[left];
				arr[left] = arr[pivot];
				arr[pivot] = temp;
				temp = imsi[left]; 
				imsi[left] = imsi[pivot];
				imsi[pivot] = temp;
				pivot = left;
				right--;
			} else {
				left++;
			}
		}
	}
	sorts(arr, start, pivot);
	sorts(arr, pivot+1, end);
}


