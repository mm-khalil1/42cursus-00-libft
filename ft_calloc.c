/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <mkhalil@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:26:54 by mkhalil           #+#    #+#             */
/*   Updated: 2022/06/27 17:53:16 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*p;

	if (size != 0)
		if (n > SIZE_MAX / size)
			return (0);
	p = malloc(n * size);
	if (!p)
		return (0);
	ft_bzero(p, size * n);
	return ((void *)p);
}
