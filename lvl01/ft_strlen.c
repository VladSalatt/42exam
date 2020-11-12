#include <stdio.h>

int 	ft_strlen(char *s)
{
	int i = 0;

	while (s[i])
			i++;
	return (i);
}

int main(void)
{
	char str[] = "1234";
	printf("%d\n", ft_strlen(str));
	return 0;
}