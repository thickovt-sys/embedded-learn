#include <stdio.h>

int* foo()
{
    int a = 10;

    printf("foo : %p -> %d\n", (void*)&a, a);

    return &a;
}

void bar()
{
    int x = 111;

    printf("bar : %p\n", (void*)&x);
}


int main()
{
    printf("THIS IS NEW BUILD\n");
    
    int *p = foo();

    bar();

    printf("pointer = %p\n", (void*)p);

    printf("*p = %d\n", *p);

    return 0;
}