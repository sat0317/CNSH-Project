/* 문자로 완전 2진 트리 만들기*/
#include <stdio.h>
 
int main()
{
    char c[1<<10], ch, nw=10;
    FILE *fp1, *fp2;
  
    fp1=fopen("data.txt", "r");
    fp2=fopen("result.txt", "w");

    fseek(fp1, 0, SEEK_END);    // 파일 포인터를 파일의 끝으로 이동시킴
    int size = ftell(fp1);      // 파일 포인터의 현재 위치를 얻음
    fseek(fp1, 0, SEEK_SET);    // 파일 포인터를 파일의 처음으로 이동시킴
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
