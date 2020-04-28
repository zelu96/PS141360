#include <stdio.h>
#include <stdlib.h>

int* foo(int*a,int*b)
{
    if(*a>*b)
    {
        int temp=*a;
        *a=*b;
        *b=temp;
    }

}

int main()
{
    int x=2,y=3;
    foo(&x,&y);
    printf("%d %d\n",x,y);
    int x2=4,y2=1;
    foo(&x2,&y2);
    printf("%d %d\n",x2,y2);
    return 0;
}
