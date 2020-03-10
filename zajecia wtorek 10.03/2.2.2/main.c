#include <stdio.h>
#include <stdlib.h>

int silnia(int n)
{
	if(n>0)
	{
		int wynik=1;
		for(int i = 1; i<=n; i++)
		{
			wynik*=i;
		}
		return wynik;

	}
}


int main()
{
    int liczba;
    printf("Podaj liczbe: ");
    scanf("%d",&liczba);
    printf("%d",silnia(liczba));

    return 0;
}
