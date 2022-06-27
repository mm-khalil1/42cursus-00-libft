/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <mkhalil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:34:54 by mkhalil           #+#    #+#             */
/*   Updated: 2022/06/27 09:25:32 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	dsize;
	size_t	j;

	dsize = 0;
	j = 0;
	while (dest[dsize])
		dsize++;
	if (n <= dsize)
		return (ft_strlen(src) + n);
	while (src[j] && j < (n - dsize - 1))
	{
		dest[dsize + j] = src[j];
		j++;
	}
	dest[dsize + j] = 0;
	return (dsize + ft_strlen(src));
}
