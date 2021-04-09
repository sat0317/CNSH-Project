#include <stdio.h>
#define MAX (1<<5)
#define swap(t, a, b) int t=a; a=b; b=t

int binsearch(int arr[], int start, int end, int target){
	int m;
	
	while(start<=end){
		m=(start+end)/2;
		if(target==arr[m]){
			break;
		} else if(target>arr[m]){
			start=m+1;
		} else {
			end=m-1;
		}
	} 
	
	if(start<=end) return m;
	else return -1;
}

int main(){
	int a[MAX]={}, n, tar, resu;
	
	scanf("%d", &tar);
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		scanf("%d", &a[i]);
	}
	
	resu=binsearch(a, 1, n, tar); 
	
	if(resu+1){
		printf("%d", resu);
	} else {
		printf("404 NOT FOUND");
	}
	return 0;
}
