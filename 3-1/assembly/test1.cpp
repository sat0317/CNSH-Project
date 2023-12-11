#include <Windows.h>
#include <stdio.h>


//extern "C" int __stdcall set_ret(void *ret);

int main()
{
    __asm("mov %eax,0x4141		\n\t");
    __asm("mov %ebx,0x2020		\n\t");
    __asm("mov %ecx,%ebx			\n\t");
    printf("asdf");
    return 0;
}
