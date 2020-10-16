#include <stdio.h>

int 	ft_atoi(char *s)
{
	int sign;
	long res;

	res = 0;
	sign = 1;
	while (*s == 32 || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		res = res * 10 + *s - '0';
		s++;
	}
	return (sign * (int)res);
}

int 	main()
{
	char *str = "   \t\n\n\n   -54758jghfgjfgjf   ... ";
	printf("%d\n", ft_atoi(str));
	return 0;
}