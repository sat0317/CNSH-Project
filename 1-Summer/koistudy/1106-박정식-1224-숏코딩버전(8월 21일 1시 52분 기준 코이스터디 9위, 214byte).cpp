#include<stdio.h>
char z[1001];int a[2][1000],n,m,i,j;main(){scanf("%d%d",&n,&m);for(;i<n;i++){scanf("%s",z);for(j=0;j<m;j++){a[1][j]=z[j]-48?a[0][j]+z[j]-48:0;printf("%d ",a[1][j]);a[0][j]=a[1][j];}putchar(10);}}
