#include <Windows.h>
#include <stdio.h>

//extern "C" int __stdcall set_ret(void *ret);

int main()
{
    __asm("mov eax, 4141h");
    __asm("mov ebx, 2020h");
    __asm("mov ecx, ebx");
    printf("asdf");
    return 0;
}