/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashakhky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 16:47:02 by ashakhky          #+#    #+#             */
/*   Updated: 2021/02/14 17:12:42 by ashakhky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	i;
	size_t	z;

	z = 0;
	i = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char*)malloc(i + 1);
	if (!ptr)
		return (NULL);
	while (*s1)
	{
		*(ptr + z) = *(char*)(s1);
		z++;
		s1++;
	}
	while (*s2)
	{
		*(ptr + z) = *(char*)(s2);
		z++;
		s2++;
	}
	*(ptr + z) = '\0';
	return (ptr);
}
