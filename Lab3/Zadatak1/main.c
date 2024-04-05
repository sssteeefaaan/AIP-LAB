#include <stdio.h>

#define ARRAY_CAPACITY 100

void main()
{
	int N, i, j;
	int niz[ARRAY_CAPACITY];

	// Unos dimenzija niza (broj elemenata)
	N = 0;
	while (N < 1)
	{
		printf("Unesite broj elemenata niza: ");
		scanf("%d", &N);
	}

	// Unos elemenata niza
	for (i = 0; i < N; i++)
	{
		printf("Unesite %d. element niza: ", i + 1);
		scanf("%d", &niz[i]);
	}

	// Prikaz niza pre modifikacije
	printf("Uneli ste sledeci niz: [\t");
	for (i = 0; i < N; i++)
	{
		printf("%d\t", niz[i]);
	}
	printf("]\n");

	// Izbacivanje nula iz niza (modifikacija)
	for (i = 0; i < N - 1; i++)
	{
		if (niz[i] == 0 && niz[i + 1] == 0)
		{
			for (j = i; j < N - 1; j++)
			{
				niz[j] = niz[j + 1];
			}
			N--;
			i--;
		}
	}

	// Prikaz niza nakon modifikacije
	printf("Niz nakon uklanjanja uzastopnih nula: [\t");
	for (i = 0; i < N; i++)
	{
		printf("%d\t", niz[i]);
	}
	printf("]\n");
}