#include <stdio.h>
int f(int n)  //�Լ� f�� fibonacci ������ ǥ���� ����Լ�(�����)��. 
{
    if(n<=2) return 1;
    return f(n-1)+f(n-2);
} 
int main()
{
    int n;
    printf("���� �Է��ϼ���(1~12) : ");
    scanf("%d", &n);
    printf("%d �� ����, �䳢�� �� ���� �ɱ��? : ", n);
    printf("%d ", f(n));
    printf("\n");
    return 0;
} 

