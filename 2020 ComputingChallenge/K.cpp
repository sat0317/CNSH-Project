#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
    char d[30]; int i;      //�ִ� 30���ڸ� ������ �� �ִ� ���� ���� �غ�. �������� �ι��� ����ؾ���
    scanf("%s", d); //�� ������ Ű����� �Էµ� ������ ����. �� ������ ������ �ű������ �Էµ�
    for(i=0; d[i]!='\0'; i++) //����� ������ �ϳ��ϳ��� �˻��ؼ� �ι��ڰ� �ƴ� ���� �Ʒ� ����
    {
        printf("\'%c\'\n", d[i]);
    } 
    
    return 0;
}

