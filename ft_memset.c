/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashakhky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 16:22:43 by ashakhky          #+#    #+#             */
/*   Updated: 2021/02/12 19:51:59 by ashakhky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t a;

	if (!b)
		return (NULL);
	a = 0;
	while (a < len)
	{
		*(unsigned char *)(b + a) = (unsigned char)c;
		a++;
	}
	return (b);
}
