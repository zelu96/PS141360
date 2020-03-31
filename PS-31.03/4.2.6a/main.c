#include <stdio.h>
#include <stdlib.h>

int foo(int n, int tab1[],int tab2[])
{
    for(int i=0;i<n;i++)
    {
        tab2[i]=tab1[i];
    }
}

void foo2(int n, int *tab1, int *tab2)
{
    for(int i=0;i<n;i++)
    {
        *(tab2+i)=*(tab1+i);
    }
}

int main()
{
    int t1[] = {2,3,4};
    int t2[3] = {-1,-3,8};
    foo2(3,t1,t2);
    return 0;
}
