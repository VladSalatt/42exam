#include <stdio.h>

int 	ft_strlen(char *s)
{
	int 	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

int main()
{
	char *str = "first";
	printf("%d\n", ft_strlen(str));
	return (0);
}