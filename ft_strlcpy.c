/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashakhky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 18:06:03 by ashakhky          #+#    #+#             */
/*   Updated: 2021/02/14 17:14:47 by ashakhky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *string1, const char *string2, size_t size)
{
	size_t i;

	i = 0;
	while (i < size)
	{
		*(string1 + i) = *(string2 + i);
		i++;
	}
	*(string1 + i) = '\0';
	while (*(string2 + i))
	{
		i++;
	}
	return (i);
}
