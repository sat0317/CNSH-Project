#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
    int n, i, s=0;
scanf("%d", &n);
for(i=1; ; i++) //for �ݸ񹮿��� ����� ������ ���� ��� ���� �ݺ��ȴ�.
{
  s+=i;
  if(s>=n)
    break; //���̸�, ���� ����� �ݺ� �ڵ����� ������ ����������.
} //break; �� ����Ǹ� �ݺ��� �ߴ��ϰ� ����� ���� ���´�.
printf("%d", s);
    
    return 0;
}

