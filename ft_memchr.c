/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <mkhalil@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:32:06 by mkhalil           #+#    #+#             */
/*   Updated: 2022/06/27 17:53:45 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *) str;
	while (n > 0)
	{
		if (*p == (unsigned char) c)
			return ((void *)p);
		n--;
		p++;
	}
	return (0);
}
