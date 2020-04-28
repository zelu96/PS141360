#include <stdio.h>
#include <stdlib.h>

int foo(int *x,int *y)
{
    if(*x<*y)
        return *x;
    else
        return *y;
}


int main()
{
    int x,y;
    printf("podaj x: ");
    scanf("%d",&x);
    printf("Podaj y: ");
    scanf("%d",&y);
    printf("%d",foo(&x,&y));
    return 0;
}
