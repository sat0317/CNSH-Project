#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
    char a[10000]={};
    scanf("%s", a);
    printf("�Է¹��� ���ڿ��� ���̴� %d�Դϴ�.", strlen(a));
    printf("\n�Է¹��� ���ڿ��� �Ųٷ� ����մϴ�.\n");
    for(int i=strlen(a)-1;i>=0;i--){
    	printf("%c", a[i]);
	}
    
    return 0;
}

