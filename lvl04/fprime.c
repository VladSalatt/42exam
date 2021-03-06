#include <stdio.h>
#include <stdlib.h>

void 	fprime(int nb)
{
		int prime = 2;

		if (nb == 1)
			printf("1");
		else
		{
			while (nb > 1)
			{
				if (nb % prime == 0)
				{
					printf("%d", prime);
					nb /= prime;
					if (nb > 1)
						printf("*");
					prime--;
				}
				prime++;
			}
		}
}

int main(int ac, char **av)
{
	if (ac == 2 && *av[1])
		fprime(atoi(av[1]));
	printf("\n");
	return (0);
}