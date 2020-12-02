#include <unistd.h>

void print(char *s, int low, int high)
{
	while (low <= high)
		write(1, &s[low++], 1);
}

void biggest(char *s)
{
	int i;
	int len;
	int max_len;
	int low;
	int high;
	int start;

	len = 0;
	while (s[len])
		len++;
	i = 1;
	max_len = 1;
	while (++i < len)
	{
		low = i - 1;
		high = i;
		while (low >= 0 && high < len && s[low] == s[high])
		{
			if (high - low + 1 > max_len)
			{
				start = low;
				max_len = high - low + 1;
			}
			--low;
			++high;
		}
		low = i - 1;
		high = i + 1;
		while (low >= 0 && high < len && s[low] == s[high])
		{
			if (high - low + 1 > max_len)
			{
				start = low;
				max_len = high - low + 1;
			}
			--low;
			++high;
		}
	}
	print(s, start, start + max_len - 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
		biggest(av[1]);
	write(1, "\n", 1);
	return 0;
}