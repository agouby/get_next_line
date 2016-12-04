/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 12:41:09 by agouby            #+#    #+#             */
/*   Updated: 2016/11/14 13:16:02 by agouby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *new;

	new = (char *)s;
	if (c == '\0')
		return (new + ft_strlen(new));
	while (*new)
		new++;
	new = new - 1;
	while (*new)
	{
		if (*new == (char)c)
			return (new);
		new--;
	}
	return (0);
}
