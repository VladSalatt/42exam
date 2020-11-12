#include <unistd.h>

char is_a_letter(char c)
{
	char res;

	if (c >= 'A' && c <= 'Z')
			res = c + 32;
	else if (c >= 'a' && c <= 'z')
			res = c - 32;
	else
			res = c;
	return (res);
}

int main(int ac, char **av)
{
	char res;

	if (ac == 2)
	{
		while (*av[1])
		{
			res = is_a_letter(*av[1]);
			write(1, &res, 1);
			av[1]++;
		}
	}
	write(1, "\n", 1);
	return 0;
}