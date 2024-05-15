/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanzanr <sdanzanr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 02:02:21 by sdanzanr          #+#    #+#             */
/*   Updated: 2024/04/16 03:52:09 by sdanzanr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
int main (void)
{
	printf("%d\n",ft_isascii('a'));
	printf("%d\n",ft_isascii('1'));
	printf("%d\n",ft_isascii('#'));
	printf("%d\n",ft_isascii('A'));
	printf("%d\n",ft_isascii('a'));
	printf("%d\n",ft_isascii('\n'));
	printf("%d\n",ft_isascii('\0'));
	printf("%d\n",ft_isascii('a'));
	printf("%d\n",ft_isascii('a'));
}
