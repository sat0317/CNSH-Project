#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
    char a[10000]={};
    scanf("%s", a);
    printf("입력받은 문자열의 길이는 %d입니다.", strlen(a));
    printf("\n입력받은 문자열을 거꾸로 출력합니다.\n");
    for(int i=strlen(a)-1;i>=0;i--){
    	printf("%c", a[i]);
	}
    
    return 0;
}

