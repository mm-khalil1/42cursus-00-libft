/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <mkhalil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:34:54 by mkhalil           #+#    #+#             */
/*   Updated: 2022/06/23 12:23:38 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	if (!dest || !src)
		return (0);
	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < (n - i - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	if (n > 0 && i > 0)
		dest[i + j] = 0;
	return (i + j);
}
