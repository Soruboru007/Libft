/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanzanr <sdanzanr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 03:51:44 by sdanzanr          #+#    #+#             */
/*   Updated: 2024/04/16 03:51:45 by sdanzanr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
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
