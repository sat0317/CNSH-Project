#include <algorithm>
#include <stdio.h> 
using namespace std;

//sort(�ڷ����, �ڷ᳡����, �ڷ����ı���);
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
