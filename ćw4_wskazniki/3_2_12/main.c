#include <stdio.h>
#include <stdlib.h>

int* foo(unsigned int n)
{
    return malloc(n*sizeof(double));
}

int main()
{
    printf("%p",foo(55));
    return 0;
}
