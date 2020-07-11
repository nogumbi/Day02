/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnubr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogumbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 08:25:02 by nogumbi           #+#    #+#             */
/*   Updated: 2020/07/11 08:25:05 by nogumbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



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

