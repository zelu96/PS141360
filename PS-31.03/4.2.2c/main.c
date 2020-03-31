#include <stdio.h>
#include <stdlib.h>

int foo(int n, int tab[])
{
    int temp = 0;
    for(int i=0;i<n;i++)
    {
        temp+=tab[i]*tab[i];
    }
    return temp;
}

int foo2(int n, int *tab)
{
    int temp = 0;
    for(int i=0;i<n;i++)
    {
        temp+=*(tab+i)*(*(tab+i));
    }
    return temp;
}

int main()
{
    int tablica[] = {3,4,5,6,1};
    printf("%d",foo2(5,tablica));
    return 0;
}
