/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcardoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 22:57:39 by tcardoza          #+#    #+#             */
/*   Updated: 2018/06/26 11:45:23 by tcardoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"
#include "ft_putnbr.c"
#include "ft_putstr.c"
#include "ft_strcmp.c"

int	main(void)
{
	char str1[] = "asdg";
	char str2[] = "asdf";
	char str3[] = "A_";
	ft_putnbr(ft_strcmp(str1, str2));
	return (0);
}
