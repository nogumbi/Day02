#include <unistd.h>

void ft_putcher(char c)
{
	write(1, &c,1);
}

void ft_print_reverse_alphabet(void)
{
	char letter;

	letter = 'z';
	while(letter >= 'a')
	{
		ft_putcher(letter--);
	}
}

int main(void)
{
	ft_print_reverse_alphabet();
		return 0;
}
