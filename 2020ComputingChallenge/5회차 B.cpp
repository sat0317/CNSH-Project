#include <stdio.h>

int main(){
	
	for(int s=1;s<10;s++){
		for(int o=0;o<10;o++){
			for(int t=1;t<10;t++){
				if(s*100+o*10+t-s*10-o==t*11){
					printf("%d%d%d-%d%d=%d%d\n", s, o, t, s, o, t, t);
				}
			}
		}
	}
	
	return 0;
	
}
