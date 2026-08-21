#include <stdio.h>

int main(void)
{
    int a = 257;

    unsigned char *p = (unsigned char *)&a;

    printf("%u\n", p[0]);
    printf("%u\n", p[1]);
    printf("%u\n", p[2]);
    printf("%u\n", p[3]);

    return 0;
}