#include <stdio.h>

char 		*ft_strrev(char *str)
{
	char 	tmp;
	int 	i = 0;
	int 	j = 0;
	while (str[i])
		i++;
	i--;
	while(j < i)
	{
		tmp = str[j];
		str[j] = str[i];
		str[i] = tmp;
		i--;
		j++;
	}
	return (str);
}

int main(void)
{
	char s[] = "hola!";
	printf("%s\n", s);
	ft_strrev(s);
	printf("%s\n", s);
	return (0);
}