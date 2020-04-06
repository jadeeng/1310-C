#include <iostream>

int main()
{
    unsigned int a=0x0000FFFF;
    printf("%08x\n", a);
    a=a<<1;
    printf("%08x\n", a);



    return 0;
}
