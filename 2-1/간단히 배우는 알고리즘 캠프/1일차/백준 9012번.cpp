#include <stdio.h>
#include <string.h>
#include <stack>
using namespace std;

void gosearch(){
	char a[100];
	stack<int> s;
	scanf("%s", a);
	int n=strlen(a);
	
	for(int i=0;i<n;i++){
		if(a[i]=='('){
			s.push(1);
		}
		else if(a[i]==')'){
			if(s.size()==0){
				printf("NO\n");
				return;
			} else s.pop();
		}
	}
	if(s.size()==0){
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

//stack을 사용하지 않고 숫자가감으로 사용해도 됨 
