#include <stdlib.h>
#include <stdio.h>

char 		*ft_strdup(char *str)
{
	char 	*new_str;
	int 	len;

	while (str[len])
		len++;
	if (!(new_str = (char *)malloc(sizeof(char) * (len + 1))))
		return NULL;
	new_str[len] = '\0';
	while (len >= 0)
	{
		new_str[len] = str[len];
		len--;
	}
	return (new_str);
}

int main()
{
	char *str = "Hello!";
	printf("%s\n", ft_strdup(str));
	return 0;
}