/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 10:46:26 by agouby            #+#    #+#             */
/*   Updated: 2016/11/14 13:04:16 by agouby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		nb;
	int		minus;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	minus = 0;
	if (n < 0)
	{
		n = -n;
		minus = 1;
	}
	nb = ft_countdivi(n);
	i = 0;
	if (!(str = ft_strnew(nb + minus)))
		return (NULL);
	while (i < nb)
	{
		(minus == 1 && i == 0) ? str[i] = '-' : '\0';
		str[i + minus] = (n / ft_pow(10, nb - (i + 1)) % 10) + '0';
		i++;
	}
	str[i + minus] = '\0';
	return (str);
}
