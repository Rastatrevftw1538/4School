/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/09 10:00:44 by vmarchau          #+#    #+#             */
/*   Updated: 2018/06/21 16:35:15 by tcardoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);

void ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar(78);
	}
	else
	{
		ft_putchar(80);
	}
}

