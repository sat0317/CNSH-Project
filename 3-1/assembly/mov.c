#include <stdio.h>

int main(){
    __asm {
        mov eax,1010h
		mov ebx,2020h
		mov ecx,ebx
    }
	
    return 0;
}
