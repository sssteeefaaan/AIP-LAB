#include <stdio.h>

void main2()
{
	int i, j, N, i_jeste_prost;

	printf("Unesite N: ");
	scanf("%d", &N);

	for (i = 2; i < N; i++)
	{
		i_jeste_prost = 1; // true
		j = 2; // prvi broj kojim mozemo da probamo deljenje

		// pokusacemo sa svakim brojem od j = 2 do j = i - 1 da nadjemo j koje deli i bez ostatka
		// petlja se vrti sve dok nismo nasli nijedan broj (ostalo je i_jeste_prost na 1, jer nismo usli u telo if-a),
		// ili nismo premasili i (da je j == i, ili j > i)
		while (j < i && i_jeste_prost)
		{
			if (i % j == 0) // ostatak pri deljenju i sa j je nula
			{
				i_jeste_prost = 0;
			}

			j++;
		}

		if (i_jeste_prost)
		{
			printf("Prost broj: %d\n", i);
		}
	}

	return 0;
}