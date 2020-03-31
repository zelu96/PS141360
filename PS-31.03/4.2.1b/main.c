#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 4

void  foo(int n, int tab[])
{
    for(int i=0;i<n;i++)
    {
        tab[i]=i;
    }
}

void foo2(int n, int *tab)
{
    for(int i=0;i<n;i++)
    {
        *(tab+i)=i;
    }
}

int main()
{
    int tablica[ROZMIAR];
    foo2(ROZMIAR,tablica);
    for(int i=0;i<ROZMIAR;i++)
    {
        printf("%d\n",tablica[i]);
    }
    return 0;
}
