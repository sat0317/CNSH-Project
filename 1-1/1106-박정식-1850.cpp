#include <stdio.h>

int n, d[110];

int f();

int main()
{
  scanf("%d", &n);

  for(int i=0; i<n; i++)
    scanf("%d", &d[i]);

  printf("%d\n", f());
  return 0;
}

int f(){
    int ans=0, max=-2147483648;
    for(int i=0;i<n;i++){
        if(max<d[i]){
            ans=i;
            max=d[i];
        }
    }
    return ans+1;
} 
