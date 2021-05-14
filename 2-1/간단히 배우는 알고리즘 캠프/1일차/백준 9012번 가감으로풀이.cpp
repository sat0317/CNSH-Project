#include <stdio.h>
#include <string.h>
#include <stack>
using namespace std;

void gosearch(){
	char a[100];
	int k=0;
	scanf("%s", a);
	int n=strlen(a);
	
	for(int i=0;i<n;i++){
		if(a[i]=='('){
			k++;
		}
		else if(a[i]==')'){
			if(k==0){
				printf("NO\n");
				return;
			} else k--;
		}
	}
	if(k==0){
		printf("YES\n");
	} else printf("NO\n");
	
	return ;
}
int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++) gosearch();
	return 0;
}

