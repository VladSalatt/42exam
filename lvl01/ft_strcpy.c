#include <stdio.h>

char		*ft_strcpy(char *s1, char *s2)
{
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = *s2;
	return (s1);
}

int 		main(void)
{
	char src[] = "1234";
	char dst[] = "3456";
	printf("%s\n", dst);
	ft_strcpy(dst, src);
	printf("%s\n", dst);
	return (0);
}