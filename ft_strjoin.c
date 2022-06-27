/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <mkhalil@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:34:34 by mkhalil           #+#    #+#             */
/*   Updated: 2022/06/27 17:54:35 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	char			*join;

	if (s1 == 0 || s2 == 0)
		return (0);
	join = (char *) malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (join == 0)
		return (0);
	i = 0;
	while (s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	while (*s2)
	{
		join[i++] = *s2;
		s2++;
	}
	join[i] = 0;
	return (join);
}
