void ft_putchar(char c);

void ft_putnbr(int nb)
{
		if(nb < 10)
		{
			ft_putchar(nb + '0');
		}
		else
		{
			ft_putnbr(nb/10);
			ft_putchar(nb%10 + '0');
		}
}

