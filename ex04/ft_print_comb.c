/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogumbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 08:22:26 by nogumbi           #+#    #+#             */
/*   Updated: 2020/07/11 08:22:28 by nogumbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_putchar(char c);

void ft_print_comb(void)
{
	char n1 = '0';
	char n2 = '1';
	char n3 = '2';

	while(n1 <= '7')
	{
		while(n2 <= '8')
		{
			while(n3 <= '9')
			{
				if (n1 != n2 && n2 != n3 && n3 != n1)
				{
					ft_putchar(n1);
					ft_putchar(n2);
					ft_putchar(n3);	
					if( !(n1 == '7' && n2 == '8' && n3 == '9'))
					{
						ft_putchar(',');
						ft_putchar(' ');	
					}
				}
				n3++;
			}
			n2++;
		}
		n1++;
	}
}
