#include <stdio.h>

int main(){
	int ino, inputcode, n_code;
	scanf("%d %d", &ino, &inputcode);
	n_code=ino; 
	while(n_code>10){
		ino=n_code;
		n_code=0;
		while(ino){
			n_code+=ino%10;
			ino/=10;
		}
	}
	if(n_code==inputcode){
		printf("로그인 승인");
	}
	
	return 0;
}
