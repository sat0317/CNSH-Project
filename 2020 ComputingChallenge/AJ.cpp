#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
    int c;
    scanf("%c", &c);
    switch(c)
{
  case 'A': //���� 'A'�� ������ 65('A'�� �ƽ�Ű ��)�� ����Ǳ� ������ �����ϴ�.
    printf("best!!!");
    break;
  case 'B':
    printf("good!!");
    break;
  case 'C':
    printf("run!");
    break;
  case 'D':
    printf("slowly~");
    break;
  default:
    printf("what?");
}
    
    return 0;
}

