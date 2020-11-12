#include <stdio.h>
#include <stdlib.h>

int 	ft_atoi(const char *str)
{
	int i;
	int sign;
	long res;

	res = 0;
	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (sign * (int)res);
}

int 	main(void)
{
	char str[] = "    \n\n\v\f\r\t -5234AAAgreghrsth";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));
}