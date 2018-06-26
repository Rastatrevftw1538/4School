/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcardoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 10:31:08 by tcardoza          #+#    #+#             */
/*   Updated: 2018/06/25 10:39:41 by tcardoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_putchar(char c);

void	ft_putstr(char *str)
{
 while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}