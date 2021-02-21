/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashakhky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 16:55:09 by ashakhky          #+#    #+#             */
/*   Updated: 2021/02/14 14:26:30 by ashakhky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		times(int n)
{
	int i;

	i = 0;
	while (n /= 10)
		i++;
	return (i);
}

int		rate(int n)
{
	int i;
	int t;

	i = 0;
	t = 1;
	while (n /= 10)
		i++;
	while (i)
	{
		t *= 10;
		i--;
	}
	return (t);
}

char	*ft_itoa(int n)
{
	char*a;
	int	r;
	int i;

	i = 0;
	a = (char*)malloc(times(n) + 1);
	if (a == NULL)
		return (NULL);
	if (n == 0)
		a[0] = '0';
	if (n < 0)
	{
		n *= -1;
		a[i] = '-';
	}
	r = rate(n);
	while (n)
	{
		a[++i] = n / r + 48;
		n = n - (n / r * r);
		r /= 10;
	}
	a[++i] = '\0';
	return (a);
}
