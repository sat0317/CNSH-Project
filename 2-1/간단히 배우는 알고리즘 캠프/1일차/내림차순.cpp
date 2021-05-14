#include <stdio.h>
#include <algorithm>

using namespace std;

bool cmp(int a, int b){
	if(a>b) return 1; //내림차순은 앞의 원소가 뒤의 원소보다 큼 
	else return 0;
	//return a>b 해도 됨 
}

int main(){
	int n;
	int a[100];
	
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	sort(a, a+n, cmp);
	for(int i=0;i<n;i++){
		printf("%d\n", a[i]);
	}
	return 0;
}
