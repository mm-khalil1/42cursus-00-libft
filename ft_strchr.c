/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <mkhalil@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:34:12 by mkhalil           #+#    #+#             */
/*   Updated: 2022/06/28 16:57:12 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (str == NULL)
		return (NULL);
	while (*str != '\0' && *str != (char)c)
		str++;
	if (*str == (char)c)
		return ((char *)str);
	return (NULL);
}
