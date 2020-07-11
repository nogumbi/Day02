/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogumbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 08:21:45 by nogumbi           #+#    #+#             */
/*   Updated: 2020/07/11 08:21:48 by nogumbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
