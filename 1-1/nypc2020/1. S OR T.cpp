#include <stdio.h>
#include <string.h>
#define find(x) (((x)/4)*4+4)

int main(){
	char a[100000]={0, };
	int here=0;
	int n;
	int i;
	scanf("%s", a);
	n=strlen(a);
	
	for(i=0;i<n;i++){
		if(a[i]=='S') here++;
		else here=find(here);
	}
	printf("%d", here);
	
	return 0;
}
