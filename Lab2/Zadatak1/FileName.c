#include <stdio.h>
void main()
{
	int i, j, n;

	printf("Unesi n: ");
	scanf("%d", &n);

	for (i = 2; i < n; i++)
	{
		j = 2;
		while (j < i && i % j != 0)
		{
			j++;
		}

		if (j == i)
		{
			printf("%d ", i);
		}
	}

}