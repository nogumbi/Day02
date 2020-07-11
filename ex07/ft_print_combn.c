/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogumbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 08:28:54 by nogumbi           #+#    #+#             */
/*   Updated: 2020/07/11 08:28:56 by nogumbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void ft_putchar(char c);

void ft_print_combn(int n)
{
	int n1;
	int n2;
	    
	n1 = 0;	
	while(0 < n  && n < 10)
	{
		n2 = 1;
		while(0 < n && n < 10)
		{
			ft_putchar(n1 + 48);
			ft_putchar(n2 + 48);

			ft_putchar(',');
			ft_putchar(' ');
			
			n2++;
		n++;
		}
		n1++;
	}
}
