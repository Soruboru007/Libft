/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanzanr <sdanzanr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 01:30:45 by sdanzanr          #+#    #+#             */
/*   Updated: 2024/04/16 01:40:44 by sdanzanr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_isalnum(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') || ('0' <= c
			&& c <= '9'))
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('D'));
	printf("%d\n", ft_isalnum('0'));
	printf("%d\n", ft_isalnum('*'));
	printf("%d\n", ft_isalnum('\0'));
	return (0);
}