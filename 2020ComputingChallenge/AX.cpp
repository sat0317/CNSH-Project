#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
	int i, n;
	scanf("%d", &n);
    for(i=1; i<=n; i++) //1���� ������ n���� 1�� ������Ű�鼭 �ݺ��Ѵ�.
{
  if(i%3==0)
    continue; //¦�����? �Ʒ� �κ��� �ǳʶٰ�! ���~
  printf("%d ", i); //�ᱹ ¦���� �ƴ� ������ ��µȴ�.
} 
    
    return 0;
}

