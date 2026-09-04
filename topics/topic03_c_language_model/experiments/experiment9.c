#include <stdio.h>

int main(void)
{
    int a = 257;

    unsigned char *p = (unsigned char *)&a;

    printf("before: %d\n", a);

    p[0] = 2;

    printf("after:  %d\n", a);

    return 0;
}