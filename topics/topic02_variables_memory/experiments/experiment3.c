#include <stdio.h>

int global = 10;

int main()
{
    int local = 20;

    printf("global = %p\n", (void*)&global);
    printf("local  = %p\n", (void*)&local);

    return 0;
}