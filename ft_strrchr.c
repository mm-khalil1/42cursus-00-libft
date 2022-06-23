/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <mkhalil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:36:03 by mkhalil           #+#    #+#             */
/*   Updated: 2022/06/23 12:23:47 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	if (!str)
		return (0);
	len = ft_strlen(str);
	str += len - 1;
	while (*str != c && len > 0)
		str--;
	if (*str == c)
		return ((char *)str);
	return (0);
}
