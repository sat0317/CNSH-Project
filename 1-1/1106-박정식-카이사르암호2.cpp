#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int i, innum;
    char arr[26]; //���ĺ� 26��
    char inchar;

    for(i='A'i<='Z';i++){//���ĺ� 26��
        arr[i]=i;
    }
    printf("��ȣȭ�� ����, �о�� ���� ���� �Է��Ͻÿ�: ");
    scanf("%c %d", &inchar, &innum);
    printf("��ȣȭ �� ����: %c", arr[(inchar-'A'+innum)%26]);
    return 0;
}
