/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcardoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 12:29:08 by tcardoza          #+#    #+#             */
/*   Updated: 2018/06/21 14:00:54 by tcardoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char);

void ft_print_numbers(void)
{
	int num;

	num = 48;
	while (num < 58)
	{
		ft_putchar(num);
		num = num + 1;
	}
}
