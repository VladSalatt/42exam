#include <stdlib.h>
#include <stdio.h>

int 		ft_strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return i;
}

char 		*ft_strdup(char *src)
{
	char 	*dest;
	int 	len = ft_strlen(src);

	if (!(dest = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	dest[len] = '\0';
	while (len >= 0)
	{
		dest[len] = src[len];
		len--;
	}
	return (dest);
}

int main(void)
{
	char *dest;
	char str[] = "12345";
	printf("%s\n", str);
	dest = ft_strdup(str);
	printf("%s\n", dest);
	return (0);
}