#include <stdio.h>
#include <stdlib.h>

void foo(int const *a,int *const b)
{
    *b=*a;
}

int main()
{
    int x=5,y=10;
    foo(&x,&y);
    printf("%d %d",x,y);
    return 0;
}
