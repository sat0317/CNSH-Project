#include <algorithm>
#include <stdio.h> 
using namespace std;

//sort(자료시작, 자료끝범위, 자료정렬기준);
int main(){
	int a[10]={};
	for(int i=0;i<10;i++){
		scanf("%d", &a[i]);
	}
	sort(a, a+10);
	for(int i=0;i<10;i++){
		printf("%d ", a[i]);
	} 
	
	return 0;
}
