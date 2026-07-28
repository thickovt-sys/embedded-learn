#include <stdio.h>

void foo()
{
    int a = 10;

    printf("foo:  %p\n", (void*)&a);
}

int main()
{
    int b = 20;

    printf("main: %p\n", (void*)&b);

    foo();

    return 0;
}