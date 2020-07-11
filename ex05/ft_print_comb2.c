/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogumbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 08:23:41 by nogumbi           #+#    #+#             */
/*   Updated: 2020/07/11 08:23:44 by nogumbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void ft_putchar(char c);

void ft_print_comb2(void)
{
	char n1;
	char n2;
	char n3;
	char n4;

	n1 = '0';
	while( n1 <= '9')
	{
		n2 = '0';
		while(n2 <= '9')
		{
			n3 = '0';
			while(n3 <= '9')
			{
				n4 = '1';
				while(n4 <= '9')
				{
					ft_putchar(n1);
					ft_putchar(n2);
					ft_putchar(' ');
					ft_putchar(n3);
					ft_putchar(n4);
					ft_putchar(',');
					ft_putchar(' ');
					n4++;
					}
				n3++;
			}
			n2++;
		}
	 n1++;
	}
}
