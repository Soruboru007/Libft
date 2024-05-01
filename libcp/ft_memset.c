/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanzanr <sdanzanr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:34:25 by sdanzanr          #+#    #+#             */
/*   Updated: 2024/04/27 17:39:18 by sdanzanr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

//ここではsize_tはint型とchar型の通訳みたいなもん。(バイト数)
//（int型とchar型は直接、比較できないからそうだ。）
void	*ft_memset(void *buf, int ch, size_t n)
{
	char	*p;

	p = (char *)buf;
	while (n)
	{
		p[n - 1] = ch;
		n--;
	}
}

// int	main(void)
// {
// 	char str[] = "0123456789";

// 	// memset(str+2, '*', 5);
// 	ft_memset(str + 2, '*', 5);
// 	printf("%s\n", str);

// 	return (0);
// }