#include<unistd.h>

void ft_putcher(char c)
{
	write(1, &c, 1);
}

void ft_is_negative(int n)
{
	if (n < 0 )
		ft_putcher('N');
	else
		ft_putcher('P');
}

int main(void)
{
	ft_is_negative(-1);
	return 0;
}
