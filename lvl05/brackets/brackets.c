#include <unistd.h>
#define BUFF_SIZE (4096)

static int match(char a, char b)
{
	return ((a == '[' && b == ']') || (a == '(' && b == ')') || (a == '{' &&
	b == '}'));
}

static int check_brac(char *str)
{
	int i = 0;
	int top = 0;
	int stack[BUFF_SIZE];

	while (str[i])
	{
		if (str[i] == '(' || str[i] == '[' || str[i] == '{')
			stack[++top] = str[i];
		if (str[i] == ')' || str[i] == ']' || str[i] == '}')
			if (!match(stack[top--], str[i]))
				return 0;
		i++;
	}
	return (!top);
}

int main(int ac, char **av)
{
	int i = 0;

	if (ac == 1)
		write(1, "\n", 1);
	while (--ac)
	{
		if (check_brac(av[++i]))
			write(1, "OK\n", 3);
		else
			write(1, "Error\n", 6);
	}
	return 0;
}