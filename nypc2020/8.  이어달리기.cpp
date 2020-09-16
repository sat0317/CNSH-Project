#include <stdio.h>
#include <stdlib.h>

#define t(a, b, c) ((a)*60*100+(b)*100+(c))
#define abs(a) ((a)>0?(a):-(a))

void qsar(int arr[], int start, int end);

int main(){
	int n;
	int a[400][4];
	int b[400];
	int grp[400]={0, };
	int cnt=0;
	const int cut=t(0, 10, 0);
	int i, j, k, l; 
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d:%d:%d", &a[i][0], &a[i][1], &a[i][2]);
		b[i]=t(a[i][0], a[i][1], a[i][2]);
	}
	qsar(b, 0, n);

	
	for(i=0;i<n;i++){
		
	} 
	
	
	printf("%d", cnt);
	
	return 0;
}

void qsar(int arr[], int start, int end){
	int left = start;
	int right = end-1;
	int pivot = start;
	
	if (start >= end)
		return;

	while (left<right){
		if (left == pivot) {
			if (arr[pivot] > arr[right]){

				int temp = arr[right]; 
				arr[right] = arr[pivot];
				arr[pivot] = temp;
			
				pivot = right;
				left++;
			} else {
				right--;
			}
		} else if (pivot == right){
			if (arr[pivot] < arr[left]){
				int temp = arr[left];
				arr[left] = arr[pivot];
				arr[pivot] = temp;

				pivot = left;
				right--;
			} else {
				left++;
			}
		}
	}
	qsar(arr, start, pivot);
	qsar(arr, pivot+1, end);
}
//[참고] [C언어] 퀵정렬(Quick Sort)|작성자 수길쌤
