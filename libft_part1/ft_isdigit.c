/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanzanr <sdanzanr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 01:21:12 by sdanzanr          #+#    #+#             */
/*   Updated: 2024/04/16 01:28:39 by sdanzanr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_isdigit('a'));
	return (0);
}