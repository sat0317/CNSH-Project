/* ���ڷ� ���� 2�� Ʈ�� �����*/
#include <stdio.h>
 
int main()
{
    char c[1<<10], ch, nw=10;
    FILE *fp1, *fp2;
  
    fp1=fopen("data.txt", "r");
    fp2=fopen("result.txt", "w");

    fseek(fp1, 0, SEEK_END);    // ���� �����͸� ������ ������ �̵���Ŵ
    int size = ftell(fp1);      // ���� �������� ���� ��ġ�� ����
    fseek(fp1, 0, SEEK_SET);    // ���� �����͸� ������ ó������ �̵���Ŵ
	for(int i=1; ((ch = fgetc(fp1)) != EOF); i++)
    {     
        c[i]=ch; 
    }
   for(int k=1;k<=size;k*=2)
   {
   	    for(int i=k;i<=size && i<=2*k-1;i++)
           putc(c[i], fp2);
           //printf("%c  ", c[i]);
        putc(nw,fp2);
        //printf("\n");
   }                     
    fclose( fp1 );
    fclose( fp2 );
}
