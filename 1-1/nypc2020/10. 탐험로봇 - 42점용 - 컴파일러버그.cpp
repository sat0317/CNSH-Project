#include <stdio.h>
#include <string.h>
int main(){
   int r, c; char a[1002]={0, };
   int ans=0;
   char s[5];
   scanf("%d %d", &r, &c);
   scanf("%s", s);
   scanf("%s", &a[1]);
   if(s[1]=='a'){
      for(int i=1;i<=c;i++){
         if(a[i]=='?'){
            if(a[i-1]=='L') a[i]='S';
            else a[i]='L';
         }
      }
   } else {
      for(int i=1;i<=c;i++){
         if(a[i]=='?'){
            if(a[i-1]=='L') a[i]='L';
            else a[i]='S';
         }
      }
   }
   for(int i=1;i<=c;i++){
      if(a[i]=='L'){
         while(a[++i]=='L');
         ans++;
      }
   }
   printf("%d", ans);
   return 0;
}

