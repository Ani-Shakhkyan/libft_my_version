/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashakhky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 19:56:09 by ashakhky          #+#    #+#             */
/*   Updated: 2021/02/14 17:13:31 by ashakhky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, char const *src, size_t size)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(dest);
	if (size < len)
		return (ft_strlen(src) + size);
	while (i < size - len)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[size - 1] = '\0';
	return (ft_strlen(src) + len);
}
