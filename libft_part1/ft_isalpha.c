/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanzanr <sdanzanr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:51:05 by sdanzanr          #+#    #+#             */
/*   Updated: 2024/04/16 01:15:05 by sdanzanr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <unistd.h>

int	ft_isalpha(int str)
{
	if (('A' <= str && str <= 'Z') || ('a' <= str && str <= 'z'))
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	printf("%d", ft_isalpha('a'));
	return (0);
}
