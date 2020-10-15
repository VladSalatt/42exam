#include <stdio.h>

char *ft_strcpy(char *src, char *dest)
{
	while (*src)
	{
		*dest = *src;
		src++;
	}
	*dest = *src;
	return (dest);
}

int main(void)
{
	char *s1 = "sour";
	char *s2 = "dest";

	printf("%s\n", s1);
	ft_strcpy(s2, s1);
	printf("%s\n", s1);
	return 0;
}