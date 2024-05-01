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
#include <stdio.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
  size_t i;
  i = 0;
  while (i < n)
    {
      ((char *)dst)[i] = ((char *)src)[i];
      i++;
    }
  return (dst);
}


int main(void)
{
  int arr1[] = {1, 2, 3, 4, 5};
  int arr2[5];
  memcpy(arr2, arr1, sizeof(arr1));
  return 0;
}
