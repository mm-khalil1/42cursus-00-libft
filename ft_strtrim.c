/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <mkhalil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:36:17 by mkhalil           #+#    #+#             */
/*   Updated: 2022/06/23 12:23:48 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*trim;

	if (!s1 || !set)
		return (0);
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	if (*s1)
	{
		i = ft_strlen(s1) - 1;
		while (ft_strchr(set, s1[i]) && i >= 0)
			i--;
	}
	else
		i = -1;
	trim = ft_substr(s1, 0, i + 1);
	return (trim);
}
