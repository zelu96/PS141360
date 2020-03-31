#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 5

void  foo(int n, int tab[])
{
    for(int i=0;i<n;i++)
    {
        tab[i]*=2;;
    }
}

void foo2(int n, int *tab)
{
    for(int i=0;i<n;i++)
    {
        *(tab+i)*=2;
    }
}

int main()
{
    int tablica[ROZMIAR] = {-2,0,3,8,11};
    foo2(ROZMIAR,tablica);
    for(int i=0;i<ROZMIAR;i++)
    {
        printf("%d\n",*(tablica+i));
    }
    return 0;
}
