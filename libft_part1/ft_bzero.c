/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanzanr <sdanzanr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:49:33 by sdanzanr          #+#    #+#             */
/*   Updated: 2024/04/28 07:16:46 by sdanzanr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	int				i;
	unsigned char	*ptr;

	i = 0;
	ptr = b;
	while (i < (int)len)
	{
		ptr[i] = 0;
		i++;
	}
}
int main(void)
{
    char str[] = "0123456789";
	ft_bzero(str, 1);
	printf("%s\n", str);
    return 0;
}
