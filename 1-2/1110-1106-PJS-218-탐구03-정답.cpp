#include <stdio.h>
int main()
{
  int n, a, b, c, cnt = 0;
  scanf("%d", &n);
  for(a = 1; a <= n; a++)
    for(b = a; b <= n; b++)
      for(c = b; c <= n; c++)
         if(a + b + c == n && a + b > c)
         { 
             printf("%d   %d   %d\n", a, b, c);   //올바른 해를 찾았는지 확인하기 위해 임의 출력함
             cnt++;
		 }
  printf("%d \n", cnt);
  return 0;
}
