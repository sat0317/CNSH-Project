#include <stdio.h>
int n, repeatN;
int f(int prevN, int nowN)  //�Լ� f�� fibonacci ������ ǥ���� ����Լ�(�����)��. 
{
    repeatN++;
    if(repeatN>=n)
        return nowN;
    return f(nowN, prevN+nowN);
}
int main()
{
    printf("���� �Է��ϼ���(1~12) : ");
    scanf("%d", &n);
    printf("%d �� ����, �䳢�� �� ���� �ɱ��? : ", n);
    printf("%d", f(0, 1));
    printf("\n");
    return 0;
} 

