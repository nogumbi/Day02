/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_aphabet.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogumbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 16:07:18 by nogumbi           #+#    #+#             */
/*   Updated: 2020/07/10 16:07:31 by nogumbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void ft_putchar(char c);

void ft_print_alphabet(void)
{
	char letter;
	letter = 'a';
	while(letter <= 'z')
	{
		ft_putchar(letter++);
	}
}

