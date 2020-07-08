#include <unistd.h>

void ft_putcher(char c)
{
	write(1, &c,1);
}

void ft_print_alphabet(void)
{
	char letter;
	letter = 'a';
	while(letter <= 'z')
	{
		ft_putcher(letter++);
	}
}

int main(void)
{
	ft_print_alphabet();
		return 0;
}

