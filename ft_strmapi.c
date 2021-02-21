/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashakhky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 19:28:45 by ashakhky          #+#    #+#             */
/*   Updated: 2021/02/14 14:52:51 by ashakhky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;
	int		a;

	a = 0;
	i = ft_strlen(s);
	str = (char*)malloc(i);
	while (*(s + a))
	{
		str[a] = f(i, *(s + a));
		a++;
	}
	return (str);
}
