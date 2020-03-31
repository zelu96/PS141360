#include <stdio.h>
#include <stdlib.h>

void  foo(int n, int tab[])
{
    for(int i=0;i<n;i++)
    {
        tab[i]=0;
    }
}

void foo2(int n, int *tab)
{
    for(int i=0;i<n;i++)
    {
        *(tab+i)=0;
    }
}

int main()
{
    int tablica[4];
    foo2(4,tablica);
    return 0;
}
