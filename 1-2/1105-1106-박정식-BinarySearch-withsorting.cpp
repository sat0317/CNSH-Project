#include <stdio.h>
#define MAX (1<<5)
#define swap(t, a, b) int t = a; a = b; b = t

int ans[MAX], arr[MAX];
void qsar(int l, int r)
{
	if(l>=r) return;
	
	int pivot = arr[l];
	int p = l+1;
	int q = r;
	
	while(1)
	{
		while(arr[p]<=pivot && p<r) p++;
		while(arr[q]>pivot && q>l) q--;
		if(p<q){
			int t = arr[p];
			arr[p] = arr[q];
			arr[q] = t;
			t = ans[p];
			ans[p] = ans[q];
			ans[q] = t;
		} else {
			int t = arr[l];
			arr[l] = arr[q];
			arr[q] = t;
			t = ans[l];
			ans[l] = ans[q];
			ans[q] = t;
			break;
		}
	}
	
	qsar(l, q-1);
	qsar(q+1, r);
}


int binsearch(int start, int end, int target){
	int m, checksort=1;
	int left=start;
	int right=end;
	for(int i=start;checksort&&(i<end);i++){
		if(arr[i]>arr[i+1]){
			checksort=0;
		}
	}
	for(int i=start;i<=end;i++){
		ans[i]=i;
	}
	for(int i=start;i<=end;i++){
		printf("%d ", ans[i]);
	}
	if(!checksort) {
		qsar(start, end);
	}
	for(int i=start;i<=end;i++){
		printf("%d ", ans[i]);
	}
	
	while(left<=right){
		m=(left+right)/2;
		if(target==arr[m]){
			break;
		} else if(target>arr[m]){
			left=m+1;
		} else {
			right=m-1;
		}
	} 
	
	if(left<=right) return ans[m];
	else return -1;
}

int main(){
	int n, tar, resu;
	
	scanf("%d", &tar);
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		scanf("%d", &arr[i]);
	}
	
	resu=binsearch(1, n, tar); 
	
	if(resu+1){
		printf("%d", resu);
	} else {
		printf("404 NOT FOUND");
	}
	return 0;
}
