#include <stdio.h>
#include <stdlib.h>

int zad6(unsigned int n, int tab[n])
{
    int indeks = 0;
    int najwiekszyElement = tab[0];
    for(int i=1; i < n; i++)
    {
        if(tab[i]>najwiekszyElement && tab[i]%2==1)
        {
            najwiekszyElement=tab[i];
            indeks = i;
        }
    }
    if(najwiekszyElement%2==0)
        return -1;
    else
        return indeks;
}


int main()
{
    int n1 = 5;
    int tab1[5]={2,4,4,6,8};


    int n2 = 7;
    int tab2[7]={1,3,4,11,7,6,43};

    printf("%d \n", zad6(n1,tab1));
    printf("%d \n", zad6(n2,tab2));



    return 0;
}
