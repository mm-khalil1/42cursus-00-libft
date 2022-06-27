/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <mkhalil@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:36:27 by mkhalil           #+#    #+#             */
/*   Updated: 2022/06/27 17:55:05 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
		len = 0;
	else if (ft_strlen(&s[start]) < len)
		len = ft_strlen(&s[start]);
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (sub == 0)
		return (0);
	i = 0;
	while (start < ft_strlen(s) && i < len && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = 0;
	return (sub);
}
