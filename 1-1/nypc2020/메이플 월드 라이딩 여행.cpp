#include <stdio.h>
	int a[10000]={0, };
	int root=0;
	int n, m, k, s;
	int ge[100000][3]={0, };
	char check[100000][100000];
void qsar(int arr[], int start, int end);
int find(int s, int k, int d){
	int imsi=0;
	for(int i=k;i<m;i++){
		if(ge[i][0]==s&&check[s][ge[i][1]]==0){
			check[s][ge[i][1]]=1;
			a[d] = find(ge[i][1], 0, root)+ge[i][2];
			d++;
			root++;
		}
	}
	return 0;
}

int main(){
	
	scanf("%d %d %d %d", &n, &m, &k, &s);
	for(int i=0;i<m;i++){
		scanf("%d %d %d", &ge[i][0], &ge[i][1], &ge[i][2]);
	}

		find(s, 0, 0);
		a[root++]=0;

	
	qsar(a, 0, root);
	printf("%d", a[k]);
	
	
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
