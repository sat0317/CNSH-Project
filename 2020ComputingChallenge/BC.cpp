#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
    int n, i, t, minis=1;
int a[24]={};
scanf("%d", &n); //���� �Է¹ޱ�
for(i=1; i<=n; i++) //������ŭ �Է¹ޱ�
{
  scanf("%d", &t); //�о
  a[t]=a[t]+1; //����ִ� ���� 1��ŭ ���� �ٽ� ����. a[t]+=1 �� ����.
}
for(i=1; i<=23; i++)
{
if(a[i]){
	minis=i;
	break;
}
   //1~23 �� �迭�� ����Ǿ��ִ� �� ����ϱ�
}
    printf("%d ", minis);
    return 0;
}

