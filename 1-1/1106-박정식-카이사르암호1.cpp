#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int innum;
    char inchar;
    printf("��ȣȭ�� ����, �о�� ���� ���� �Է��Ͻÿ�: ");
    scanf("%c %d", &inchar, &innum);
    printf("��ȣȭ �� ����: %c", (char)((inchar-'A'+innum)%26+'A'));

    return 0;
}
