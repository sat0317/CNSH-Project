#include <stdio.h>
#define g(i) (a[((i)+3)%3])
#define loop(i, n) for(int i=0;i<n;i++)
	int a[3]={0, };

void searching(){
	int mai=0, mii=0, sec=0;
	loop(i, 3){
		if(g(i)==g(i+1)){
			printf("Impossible");
			return;
		}
	}
	//»ý°¢ÇÏ±â ±ÍÂú´Ù¸é ¸öÀÌ °í»ýÇØº¸ÀÚ! 
	loop(i, 3){
		if(g(i)>g(mai)) mai=i;
	}
	loop(i, 3){
		if(g(i)<g(mii)) mii=i;
	}
	if(g(mai+1)==g(mii)) sec=(mai-1+3)%3;
	else sec=(mai+1)%3;
	printf("%d %d %d", g(mii), g(sec), g(mai));
}
int main(){
	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	
	searching();
	
	return 0;
}
