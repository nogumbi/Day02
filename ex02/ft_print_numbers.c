void ft_putchar(char c);

void ft_print_numbers(void)
{
	char numbers;
	numbers='0';
		while(numbers<='9')
		{
			ft_putchar(numbers++);
		}
}
